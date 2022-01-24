/* Printing pattern */                  
#include <stdio.h>

void starPattern(int len){
    int arr[10][10];
    for(int i=0; i<len;i++){
        for( int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

}

void trianglePattern( int len){
     int arr[10][10];
    for(int i=0; i<len;i++){
        for( int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=0; i<len-1;i++){
        for(int j=1+i;j<len;j++){
                 printf("*");
        }
        printf("\n");
    }
}
void patternGuide(){
    int num,len;
    printf("Enter 1 for star Pattern and 2 for Triangle Pattern:-");
    scanf("%d",&num);
    if (num==1){
        printf("Enter the length of Pattern:-");
        scanf("%d",&len);
        starPattern(len);
    }
    else if (num==2){
        printf("Enter the length of Pattern:-");
        scanf("%d",&len);
        trianglePattern(len);
    }
    else {
        printf("Some Error Occured!\n");
        patternGuide();
    }
}



int main(){
    patternGuide();
    return 0;
}

