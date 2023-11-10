#include "petlib.h"

void new_line()
{
    int i = 0;
    while (file_text[i] != '\0')
    {
        char x = file_text[i];

        if (x == ' ' || x == '!' || x == '?' || x == ',' || x == '.')
        {
            printf("%c\n", x);
        }
        else
        {
            printf("%c", x);
        }

        i++;
    }

    // Construction to stop console to let user read
    printf("\nEnter something to continue...\n");
    char temp_variable = ' ';
    scanf("%c", &temp_variable);
    clear_stdin();
}