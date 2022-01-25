#include <stdio.h>

void ascendingOrder();
void descendingOrder();

int main(){
    descendingOrder();
    ascendingOrder();
  
   return 0;
}

void ascendingOrder(){
int array[]={4,1,2,8,7,3},temp;
int len= sizeof(array)/sizeof(array[0]);
 for (int i=0;i<len; i++){
        for (int j=i+1; j<len; j++){
            if(array[i]>array[j]){
                temp = array[i];
                array[i]= array[j];
                array[j]= temp;
            }
        }
    }
    printf("Elements in ascending Order looks like this:-\n");
    for (int i=0;i<len;i++){
        printf("%d\t",array[i]);
    }
}

void descendingOrder(){
int array[]={4,1,2,8,7,3},temp;
int len= sizeof(array)/sizeof(array[0]);

for (int i=0;i<len; i++){
    for (int j=i+1;j<len;j++){
        if(array[i]<array[j]){
          temp = array[i];
          array[i]=array[j];
          array[j]=temp;
        }
    }
}
printf("Elements in Descending order looks like this\n");

 for (int i=0;i<len;i++){
        printf("%d\t",array[i]);
    }

}