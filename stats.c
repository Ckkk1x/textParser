#include "petlib.h"

void stats()
{
    printf("%s\n", file_text);

    // Construction to stop console to let user read
    printf("\nEnter something to continue...\n");
    char temp_variable = ' ';
    clear_stdin();
    scanf("%c", &temp_variable);
    clear_stdin();
}