// Program to create and store a information in text file

/*  

#include <stdio.h>

int main(){
    char str[150];


    FILE *filePtr= fopen("test.txt","w");

    if (filePtr==NULL){
        printf("Sorry! File cannot be opened!!");
        return -1;
    }
    printf("Enter a sentence you want store!");
    fgets(str,sizeof(str),stdin);
    fprintf(filePtr,"%s",str);
     
    fclose(filePtr);

  
     return 0;
}

*/

/*

#include <stdio.h>

int main(){

    FILE *filePtr= fopen("test.txt","r");

    if (filePtr==NULL)
    {
        printf("Sorry! File cannot be opened!!");
        return -1;
    }
    
    char str= fgetc(filePtr);
    while (str != EOF)
    {
        printf("%c",str);
        str=fgetc(filePtr);
    }
    
    fclose(filePtr);

    return 0;

}

*/


/*

#include <stdio.h>

int main(){

    FILE *filePtr= fopen("test.txt","w");

    if (filePtr==NULL)
    {
        printf("Sorry! File cannot be opened!!");
        return -1;
    }

    // fputc('A',filePtr); // fputc on failure returns EOF 
    // fclose(filePtr);
    char putThisInFile[1000];
    printf("Enter a statement to store in a file:-");
    fgets(putThisInFile,sizeof(putThisInFile),stdin);

    for(int i=0;putThisInFile[i]!='\0';i++){
        fputc(putThisInFile[i],filePtr);
    }
        
    return 0;
}
*/


/*
#include <stdio.h>
int main(){


    FILE *filePtr= fopen("test.txt","w");

    if (filePtr==NULL)
    {
        printf("Sorry! File cannot be opened!!");
        return -1;
    }

    char string[100];
    printf("Enter a string!!!");

    fgets(string,sizeof(string),stdin);

    fputs(string,filePtr);




    return 0;
}
*/

