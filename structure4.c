//1.Structure in c-program
#include <stdio.h>
#include <string.h>

struct  person
{
    /* data */
    char name[50];
    int identNumber;
    float salary;
}per1,per2;

int callPerson(){
    //assign value to name of per1 varibles
    strcat(per1.name, "Mark Zuckerberg");
    per1.identNumber = 1001;
    per1.salary = 2500;
    //print struct variable
    printf("Identifi    Number Name     Salary\n");
    printf("Identifi : %d", per1.identNumber);
    printf("    Name : %s", per1.name);
    printf(" Salary : %.2f\n", per1.salary);

    //assign value to name of per1 varibles
    strcat(per1.name, "Mark Zuckerberg");
    per1.identNumber = 1001;
    per1.salary = 2500;
    //print struct variable
    printf("Identifi    Number Name     Salary\n");
    printf("Identifi : %d", per2.identNumber);
    printf("     Name : %s", per2.name);
    printf(" Salary : %.2f\n", per2.salary);
    return 0;
}
