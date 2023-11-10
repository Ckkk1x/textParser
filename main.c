#include "petlib.h"

int main(void)
{
    int choice;

    choice = -1;
    while(1)
    {
        system("clear"); // clears console
        printf("=========== Main menu ===========\n");
        printf("1. Stats\n");
        printf("2. Time Count\n");
        printf("3. New line\n");
        printf("\n0. Exit\n");

        scanf("%d", &choice);
        clear_stdin(); // clears the input stream
        if(choice == 0)
        {
            break;
        }
        else if (choice >= 1 && choice <= 3)
        {
            // function for intialization of file_path and file_text
            initialize();
            system("clear"); // clears console
            switch (choice)
            {
                case 1:
                    stats();
                    break;
                case 2:
                    read_time();
                   break;
                case 3:
                    new_line();
                    break;
                
                default:
                    break;
            }
        }
        
        
    }
    return (0);
}