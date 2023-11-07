#include "petlib.h"
 
static double time_count() {
    int i = 0;
    int words = 0;
    int is_space = 1; 
    
    while (file_text[i] != '\0') 
    {
        if (file_text[i] == ' ' || file_text[i] == '\n' || file_text[i] == '\t') 
        {
            is_space = 1;
        } 
        else if (is_space == 1) 
        {
            is_space = 0;
            words++;
        }
        i++;
    }
    double time = 120.0; 
    double result = words / time;
    

    
    return result; 
    
}
void read_time()
{
    double res = time_count();
    printf("Averrage reading result :%f\n",res); 
    // Construction to stop console to let user read
    printf("\nEnter something to continue...\n");
    char temp_variable = ' ';
    scanf("%c", &temp_variable);
    clear_stdin();
}
    

    

    