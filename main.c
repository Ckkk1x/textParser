#include "petlib.h"





int main(void)
{
    int choice;

    choice = -1;
    while(1)
    {
        printf("=========== Main menu ===========\n");
        printf("1. Stats\n");
        printf("\n0. Exit\n");

        scanf("%d", &choice);
        clear_stdin(); // clears the input stream
        if(choice == 0)
        {
            break;
        }
        switch (choice)
        {
            case 1:
                stats();
                break;

            default:
                break;
        }
        system("clear"); // clears console
    };
    return (0);
}