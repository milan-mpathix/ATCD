// $Id$

#include "ciao/Container_Base.h"
#include "SString.h"
#include "ace/Get_Opt.h"

char *ior_file_name_ = 0;
char *component_list_ = 0;

int
parse_args (int argc, char *argv[])
{
  ACE_Get_Opt get_opts (argc, argv, "i:o:");
  int c;

  while ((c = get_opts ()) != -1)
    switch (c)
      {
      case 'o':  // get the file name to write to
       ior_file_name_ = get_opts.opt_arg ();
      break;

      case 'i':                 // get
       component_list_ = get_opts.opt_arg ();
      break;

      case '?':  // display help for use of the server.
      default:
        ACE_ERROR_RETURN ((LM_ERROR,
                           "usage:  %s"
                           " [-o] <ior_output_file>"
                           "\n",
                           argv [0]),
                          -1);
      }

  return 0;
}

int breakdown (const char *source,
               int len,
               char *list[])
{
  ACE_Tokenizer line (source);
  line.delimiter_replace ('|', 0);

  int cntr = 0;
  char *p;
  for (p = line.next ();
       p && cntr < len;
       ++cntr, p=line.next ())
    list[cntr] = ACE::strnew (p);

  return cntr;
}

void
install_homes (ACE_ENV_SINGLE_ARG_DECL_WITH_DEFAULTS)
{
  FILE* config_file_ =
    ACE_OS::fopen (component_list_, "r");

  if (config_file_)
    {
      ACE_Read_Buffer ior_buffer (config_file_);
      char *data = 0;
      while ((data = ior_buffer.read ('\n')) != 0)
        {
          char *items[10];
          auto_ptr<char> an_entry (data);
          int len = breakdown (an_entry.get (),
                               10,
                               items);

          if (len < 4)
            continue;

          // len should be at least such and such long so we have all
          // the information we need.  These items are separate with
          // character '|'.

          // 0 -> DLL path to home executor
          // 1 -> entry point for home executor factory
          // 2 -> DLL path to servant glue code
          // 3 -> entry point for servant glue code factory

          // we are not using these until we support HomeFinder.

          // 4 -> Repository ID for home interface
          // 5 -> Repository ID for managed component
          // 6 -> Canonical Name of home interface.

          Components::CCMHome_var home =
            container._ciao_install_home (items[0],
                                          items[1],
                                          items[2],
                                          items[3]
                                          ACE_ENV_ARG_PARAMETER);
          ACE_CHECK;

          // Register with the HomeFinder now.
          CORBA::String_var str = orb->object_to_string (home.in ()
                                                         ACE_ENV_ARG_PARAMETER);
          ACE_CHECK

            write_IOR (str.in ());

          ACE_DEBUG ((LM_INFO, "%s\n", str.in ()));

        }
    }
  ACE_OS::fclose (component_list_);
}

int
write_IOR(const char* ior)
{
  FILE* ior_output_file_ =
    ACE_OS::fopen (ior_file_name_, "w");

  if (ior_output_file_)
    {
      ACE_OS::fprintf (ior_output_file_,
                       "%s",
                       ior);
      ACE_OS::fclose (ior_output_file_);
    }

  return 0;
}

int
main (int argc, char *argv[])
{
  if (parse_args (argc, argv) != 0)
    return -1;

  ACE_TRY_NEW_ENV
    {
      // Initialize orb
      CORBA::ORB_var orb = CORBA::ORB_init (argc,
                                            argv
                                            ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK

      // Get reference to Root POA.
      CORBA::Object_var obj
        = orb->resolve_initial_references ("RootPOA"
                                           ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;

      PortableServer::POA_var poa
        = PortableServer::POA::_narrow (obj.in ()
                                        ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;

      // Activate POA manager
      PortableServer::POAManager_var mgr
        = poa->the_POAManager (ACE_ENV_SINGLE_ARG_PARAMETER);
      ACE_TRY_CHECK;

      mgr->activate (ACE_ENV_SINGLE_ARG_PARAMETER);
      ACE_TRY_CHECK;

      // Start Deployment part

      CIAO::Session_Container container (orb);
      container.init ();

      // install component

      install_homes (container, ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;

      // End Deployment part

      ACE_DEBUG ((LM_DEBUG,
                  "Running generic server...\n"));

      // Run the main event loop for the ORB.
      orb->run (ACE_ENV_SINGLE_ARG_PARAMETER);
      ACE_TRY_CHECK
    }
  ACE_CATCHANY
    {
      ACE_PRINT_EXCEPTION (ACE_ANY_EXCEPTION,
                           "server::main\t\n");
      return 1;
    }
  ACE_ENDTRY;

  return 0;
}
