        // LINE I/0
#include <stdio.h>

/*
int main(){
    FILE *filePtr= fopen("lineIo.txt","w");

    if (filePtr== NULL){
        printf("File wasn't opened successfully");
        return -1;
    }

    puts("Hello World"); // puts displays in the standard output 
    
    fputs("This is ME!!!",filePtr); // it puts the line in the specified file
    fputs("Hello world.\n  This is new Me!!!",filePtr);

    fclose(filePtr);
    
    return 0;
}
*/

/*

int main(){
    char line[123];
    FILE  *filePtr= fopen("lineIo.txt","r");

    if (filePtr== NULL){
        printf("File wasn't opened successfully");
        return -1;
    }

    while (fgets(line,sizeof(line),filePtr)!=NULL){
        puts(line);
    }

    return 0;
}
*/

int main(){

     char line[123];
    FILE  *filePtr= fopen("lineIo.txt","r");

    printf("%c",fgetc(filePtr));
    char a;
    fscanf(filePtr,"%c",&a);
    printf("%c",a);
    printf("\n");

    fgets(line,sizeof(line),filePtr);
    puts(line);

    



    return 0;
}


