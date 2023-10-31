#include "petlib.h"

void clear_stdin()
{
    // clears the input stream
    char c = ' ';
    while ((c = getchar()) != '\n' && c != EOF) {}
}