#include <stdio.h>

/*
int main(){

    FILE *filePtr = fopen("characterIO.txt","w"); //WriteMode

    if(filePtr == NULL){
        printf("Sorry! Some Error Occured!!!");
        return -1;


    }
    char name[50]={"AMBUSH NEUPANE"};
    for (int i=0; name[i]!='\0';i++){
        fputc(name[i],filePtr);
    }
    
    fclose(filePtr);

    return 0;
}
*/

int main(){

    FILE *filePtr = fopen("characterIO.txt","r"); //ReadMode

    if(filePtr == NULL){
        printf("Sorry! Some Error Occured!!!");
        return -1;
    }

    char ch = fgetc(filePtr); // fgetc returns -1 after the END OF FILE
    while (ch!= -1)     
    {
        printf("%c",ch);
        ch=fgetc(filePtr); 

    }
    

 
    fclose(filePtr);
    return 0;
}