//Program to print Prime Numbers from n To n.
#include <stdio.h>
void primesInBetween(int,int);
int main(){
    int from,to;
    printf("Enter the lower Number and Upper Number to get prime numbers in between them:-");
    scanf("%d%d",&from,&to);
    primesInBetween(from,to);

    return 0;
}
void primesInBetween(int from,int to){
     if (from>to){  //Handles when Larger number is entered first.
         int temp;
        temp=from;
        from=to;
        to=temp;

    }
    printf("Prime Numbers between %d and %d are:-\n",from,to);
    for (int i=from;i<to;i++){
        if (i == 1 || i == 0)
            continue;
           int flag=0;
 
        for (int j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                flag=1;  
                break;
            }
        }

        if( flag==0){
            printf("%d  ",i);
        }
        
               
    }
        
}