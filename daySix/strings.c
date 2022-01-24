// String is array of character ending with null character (\0)

#include <stdio.h>
// int main(){

//     // char name[10]={'A','M',' ','B','U','\0'};
//     char name[10]="Ambush N";
//     printf("%s",name);
//     return 0;
// }
int main(){
    char name[15];
    printf("Enter your name:-");
    // scanf("%[^\n]",name);
    scanf("%s",name);
    // printf("%5.5s\n",name);
    puts(name);
}