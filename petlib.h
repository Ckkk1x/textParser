#ifndef PETLIB_H 
#define PETLIB_H

#include <stdio.h>
#include <stdlib.h>

extern char *file_path; //global variable
extern char *file_text; //global variable

void clear_stdin();
void initialize();
void stats();
void read_time();
void new_line();

#endif