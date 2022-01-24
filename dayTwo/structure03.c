#include <stdio.h>
struct player {
    char name[30];
    int favNum;
    struct debutDate{
        int dd;
        int mm;
        int yy;
    }DOB;

};

int main(){
    struct player cricketer;
    printf("Enter your Name:-");
    scanf("%s",cricketer.name);
    printf("Enter your Jersey Number:-");
    scanf("%d",&cricketer.favNum);
    printf("Enter your Debut Date in [DD MM YY] format:-");
    scanf("%d%d%d",&cricketer.DOB.dd,&cricketer.DOB.mm,&cricketer.DOB.yy);


    printf("Name:-%s \nFav Num:-%d,\nDebut Date:- %02d/%02d/%02d\n",cricketer.name,cricketer.favNum,cricketer.DOB.dd,cricketer.DOB.mm,cricketer.DOB.yy);  //%2d will fill the empty column on left with space , if number happens to be one-digit only,whereas %02d will fill it with a 0 (zero)//

    return 0;
}