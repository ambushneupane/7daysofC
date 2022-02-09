#include <stdio.h>

int main(){
    char  str[20];
    char ch;
    FILE *filePtr= fopen("testingFile.txt","w+");
    
    if (filePtr== NULL){
        printf("SOrry! Cannot open the file");
        return -1;
    }

    fputs("Aashish is trying to learn C",filePtr);

    rewind(filePtr); // Takes the Cursor to the starting 

    while (!feof(filePtr))
    {
        // fgets(str,20,filePtr);
        ch=fgetc(filePtr);
        printf("%c",ch);
    }
    

    fclose(filePtr);
    
    
    
    return 0;
}