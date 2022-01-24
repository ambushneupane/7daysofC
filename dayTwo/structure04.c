#include <stdio.h>
#include <string.h>

// Structure with typedef, use of strcpy() and nested structure.

typedef struct humanBeing {
    char name[50];
    int favNum;
    float salary;
    struct DateOfBirth{
        int DD;
        int MM;
        int YY;
    }DoB;
}person;

int main(){
    person p1;
    strcpy(p1.name,"Virat Kohli");
    p1.favNum=18;
    p1.salary=1000000.4654;
    p1.DoB.DD=05;
    p1.DoB.MM=11;
    p1.DoB.YY=1990;

    printf("%s who was born in %d/%d/%d wears jersey Number %d and his salary is %f",p1.name,p1.DoB.DD,p1.DoB.MM,p1.DoB.YY,p1.favNum,p1.salary);
    return 0;
}