#include <stdio.h>

/*
int main(){
    FILE *filePTR= fopen("formattedIO.txt","w");

    if (filePTR==NULL){
        printf("Sorry! Couldn't open the file");
        return -1;
    }

    fprintf(filePTR,"%d %f %c %s",4,18.120,'A',"Created from C program");  // prints inside a specified file..
    fprintf(stdout,"%d %f %c %s",4,18.120,'A',"Created from C program");// stdout is a file pointer which represents the default output device for application 
  
    fclose(filePTR);

    return 0;
}
*/

int main(){
    FILE *filePtr= fopen("formattedIO.txt","r");
    
    if (filePtr== NULL){
        printf("SOrry! Cannot open the file");
        return -1;
    }

    int number;
    float pie;
    char letter;

    fscanf(stdin,"%d %f %c",&number,&pie,&letter); // read formatted input from the given stream 

    fclose(filePtr);

    printf("%d %f %c",number,pie,letter); 

    return 0;

}