// #include <stdio.h>
// union work{
//     float salary;
//     int workerNo;
// } freelancing;

// int main(){
//     freelancing.salary=4555564.33;
//     freelancing.workerNo=18;
//     printf("Salary= %.1f\n",freelancing.salary); // .salary will no longer hold its original value
//     printf("WorkerNumber= %d ",freelancing.workerNo);
//     return 0;
// }


#include <stdio.h>
#include <string.h>
union example {
    int integer;
    float floating;
    char str[42];
};
int main(){
    union example exam;
    exam.integer=545;
    exam.floating=415.11;
    strcpy(exam.str,"This will print");


    printf("Integer value is:-%d\n",exam.integer);
    printf("Floating value is %f\n",exam.floating);
    printf("char value is %s:-",exam.str);
    return 0;
}

