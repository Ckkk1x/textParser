#ifndef PETLIB_H 
#define PETLIB_H

#include <stdio.h>
#include <stdlib.h>

extern char *file_path;
extern char *file_text;

void clear_stdin();
void copy();
void stats();
void initialize();

#endif