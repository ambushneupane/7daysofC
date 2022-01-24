//use of typedef in structure//
#include <stdio.h>
typedef struct drivesAVehicle{
    char *name;
    int age;
    int weight;
}driver;

int main(){
    // struct drivesAVehicle d1; /*Instead of this we can use this:- */
    driver d1;
    d1.name ="johhny";
    d1.age=12;
    d1.weight=50;

    printf("Name:-%s",d1.name);

return 0;
}