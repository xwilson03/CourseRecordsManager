#include <stdio.h>

#ifndef ASSIGN4_H
#define ASSIGN4_H

//82 = courseName (80) + \n + \0
#define BUFFER_SIZE 82

typedef struct{

    char courseName[80];
    char courseSched[4];
    unsigned courseHours;
    unsigned courseSize;
    unsigned padding;

} COURSE;

void create(FILE* inputFile);

void update(FILE* inputFile);

void read(FILE* inputFile);

//apparently "delete" is a keyword in C++ and vscode was not happy about that. may the naming convention rest in peace...
void del(FILE* inputFile);

#endif