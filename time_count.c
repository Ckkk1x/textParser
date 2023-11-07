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
    double minutes = time_count();
    int seconds_total =(int)(minutes * 60);
    int hours = seconds_total / 3600;
    int minutes_left = (seconds_total % 3600) / 60;
    int seconds_left = seconds_total % 60;







   
    printf("Read time: %02d:%02d:%02d\n", hours, minutes_left, seconds_left);
    // Construction to stop console to let user read
    printf("\nEnter something to continue...\n");
    char temp_variable = ' ';
    scanf("%c", &temp_variable);
    clear_stdin();
}
    

    

    