#include "main.h"
int child_p;
// nandu
char *external_cmd[150];
char *builtins[] = {"echo", "printf", "read", "cd", "pwd", "pushd", "popd", "dirs", "let", "eval",
						"set", "unset", "export", "declare", "typeset", "readonly", "getopts", "source",
						"exit", "exec", "shopt", "caller", "true", "type", "hash", "bind", "help", NULL};

void scan_input(char *prompt, char *input_string)
{
    system("clear");
    while(1)
    {
         %s", prompt);printf("
        scanf("%[^\n]", input_string);

        /*
        check PS1 is passed and valid?
        yes-> update prompt = input_string
        no-> invalid
        */
    char *cmd = get_command(input_string);
    extract_external_commands();
    int ret = check_command_type(cmd);
    if(ret == EXTERNAL)
    {
        /*
            1. create child proc 
            2. child_p == 0
            {
                //CHILD
                signal(SIGINT, SIGDFL)
                1. convert input string to 2d array
                2.check "|" is present in input
                yes->

                    //n pipe
                no->
                    //execvp
            }
            else
            {
                //PARENT    
                waitpit();
            }
        */
        printf("external\n");
    }
    if(ret == BUILTIN)
    {
        printf("internal");
        execute_internal_commands(input_string);

    }
    else
    {
        printf("invalid cmd");
    }
       
    }
}
char *get_command(char *input_string)
{
    static char temp[20];
    //logic to copy first word from input_string to temp
    return temp;
}
void extract_external_commands(char **external_commands)
{
    /*
        1. open external.txt in read mode
        2. while(!feof(fptr_external))
        {
            1. allocate mem for row 50 bytes
            2. read 1 word from file
            3. store to external_cmd arr[i]
        }
        3. close file
    */
}

int check_command_type(char *command)
{
    1. run a loop 
    {
        check cmd is matching with external_cmd[i]?
        yes-> return EXTERNAL;
    }

    2.run a loop 
    {
        check cmd is matching with builtins[i]
        yes-> return BUILTIN
    }

    return NO_COMMAND;
}

void execute_internal_commands(char *input_string)
{
    /*
        1. check input_string is "pwd"?
        yes-> getcwd();  stop

        2. check input_string is "cd"?
        yes-> chdir()

        3. check input_string is "exit"?
        yes-> exit(1);

        4. check input_string is "echo"?
        yes->
        {
                check sec_word id "$SHELL"?
                getenv("SHELL");

                check sec_word is "$?"?
                //logic

                check sec_word is "$$"?
                getpid()
        }

    */ 
}
