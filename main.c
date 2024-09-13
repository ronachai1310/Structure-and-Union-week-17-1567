//Structure in c-program
#include "structure1.c"
#include<stdio.h>

int count();

void main()
{
    printf("Structure");
    display(30);
    callPerson();
}

void display(int count){
    for (int i = 0; i < 30; i++)
    {
        printf("=");
    }
    printf("\n");
}
