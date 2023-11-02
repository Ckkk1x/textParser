#include "petlib.h"

void stats()
{
    printf("%s\n", file_text);

    // Construction to stop console to let user read
    printf("Enter something to continue...");
    char ch = ' ';
    scanf("%c", &ch);
    clear_stdin();
}