#include "petlib.h"

char *file_path = NULL;
char *file_text = NULL;

void initialize()
{
    //function to initialize file_path and file_text
    int choice;
    FILE *fp;
    long file_size;

    if(file_path)
    {
        int leave = 0;
        choice = 0;
        while(!leave)
        {
            printf("Do you want to use same file?(%s)\n", file_path);
            printf("1. Yes\n");
            printf("2. No\n");
            scanf("%d", &choice);
            clear_stdin();
            if(choice == 1 || choice == 2)
                switch (choice)
                {
                case 1:
                    return;
                case 2:
                    leave = 1;
                    break;
                default:
                    break;
                }
        }
        system("clear");
    }

    
    // Ask for file_path and exclude text from file
    fp = NULL;
    file_path = (char *)malloc(300);
    if(!file_path)
        exit(1);
    while(fp == NULL)
    {
        printf("Enter path to file (or 0 to leave): \n");
        scanf("%s", file_path);
        clear_stdin();
        fp = fopen(file_path, "r");
        if(file_path != NULL && file_path[0] == '0')
        {
            return;
        }
        if(fp == NULL)
        {
            system("clear");
            printf("Wrong path...Try again\n");
        }
    }
    fseek(fp, 0, SEEK_END);
    file_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    file_text = (char *)malloc((file_size + 1));
    fread(file_text, 1, file_size, fp);
    fclose(fp);

    system("clear");
}
