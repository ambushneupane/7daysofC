// This doesn't work as intended 
#include <stdio.h>
 
int sumOfElem(int a[]){
    int i, sum =0;
    int size = sizeof(a)/sizeof(a[0]);
    printf("SOE~ Size of a= %d , Size of a[0] = %d\n",sizeof(a),sizeof(a[0]));

    for (i=0;i<size;i++){
        printf("%d\n",a[i]);
        sum +=a[i];
    }
    return sum;
}

int main(){
     int a[]={4,5,6,8,9};
     int total = sumOfElem(a);
     printf("Sum of elements is %d\n",total);
     printf("Main Size of A= %d, size of a[0] = %d\n",sizeof(a),sizeof(a[0]));
     return 0;

}