// Full Pyramid

#include <stdio.h>
void pyramidOfStars(int rows){
   
    for (int i=1;i<=rows; i++){
        for (int space=1; space<=(rows-i); space++){
            printf(" ");
        }
        for (int star=1; star<=(2*i-1); star++){
            printf("*");
        }
            printf("\n");
    }

}


int main(){
    int rows;
    printf("Enter the number of rows you want-");
    scanf("%d",&rows);

    pyramidOfStars(rows);
}