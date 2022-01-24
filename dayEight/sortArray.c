#include <stdio.h>



int main(){
     int arr[5],temp;
     int length= sizeof(arr)/sizeof(arr[0]);
     printf("Enter Elements of arrays:-");
     for (int i=0;i<length;i++){
        scanf("%d",&arr[i]);
     }

    for (int i=0;i<length;i++){
        for (int j=i+1;j<length;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
printf("After sorting the array:- ");
for (int i=0;i<length;i++){
         printf("%d\t",arr[i]);

     }
     return 0;
}