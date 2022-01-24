#include <stdio.h>

int strlength(char *string){
    int count=0,i=0;
    while (string[i]!= '\0'){
        count ++;
        i++;
    }
    return count;
}

void strconcate(){
 char destString[50],sourceString[20];
printf("Enter first string:- ");
gets(destString);
printf("Enter second string:- ");
gets(sourceString);

int lenS1,lenS2;
lenS1= strlength(destString);
lenS2= strlength(sourceString);

for (int i=0;i<=lenS2;i++){
    destString[lenS1+i] = sourceString[i];
}
printf("String after concatenation is %s",destString);


}

int main(){
  strconcate();

return 0;
}