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
        printf("\n0. Exit\n");

        scanf("%d", &choice);
        clear_stdin(); // clears the input stream
        if(choice == 0)
        {
            break;
        }
        else if (choice >= 1 && choice < 2)
        {
            // function for intialization of file_path and file_text
            initialize();
            switch (choice)
            {
                case 1:
                    stats();
                    break;
    
                default:
                    break;
            }
        }
    };
    return (0);
}