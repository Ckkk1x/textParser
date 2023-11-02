#include "petlib.h"

char *file_path;
char *file_text;

void initialize()
{
    //function to initialize file_path and file_text
    //if is already initialized, ask if user want to use same file
    printf("Function initialize\n");
    file_path = "file_path";
    file_text = "file_text";
}