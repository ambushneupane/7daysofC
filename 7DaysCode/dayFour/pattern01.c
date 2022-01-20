//Program to print half reverse pyramid
#include <stdio.h>
int main(){
    int lengthOfPattern;
    printf("Enter the number of rows you want:-");
    scanf("%d",&lengthOfPattern);
    
    for (int i=0;i<lengthOfPattern;i++){
        for (int j=lengthOfPattern;j>i;j--){
            printf(" ");
            }
            for (int k=0;k<=i;k++){
                    printf("*");
                //    printf(" ");  //uncomment this for full pyramid.
                }
          printf("\n");
    }
    return 0;
}