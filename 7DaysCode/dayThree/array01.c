// Array is collection of similar data type stored in contiguous memory location.

//Program to find the average of user given numbers 

#include <stdio.h>
int main(){
    int num, sum=0,points[20],average=0;
    printf("Enter Number of Elements:-");
    scanf("%d",&num);

    for (int i=0; i<num;i++){
        printf("Enter value of number %d:-", i+1);
        scanf("%d",&points[i]);
        sum += points[i];
    }
    average= sum/num;
    printf("The average of given numbers is %d\n",average);
    return 0;
}