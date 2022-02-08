#include <stdio.h>
int main(){
    int totalletters=0,words=0,onlychar=0;
    FILE *filePtr=fopen("test.txt","r");
    
    
    if(filePtr== NULL){
        printf("Sorry File couldn't Open!!!");
        return -1;
    }

    char ctr;
    while ((ctr=fgetc(filePtr))!=EOF)

    {   
        totalletters+=1;
        if(ctr==' '|| ctr == '\n'|| ctr =='\0'){
            words+=1;
    
        }
        else{
            onlychar += 1;
        }
        
        // ctr=fgetc(filePtr);
       
     }
    
    printf("Total Number of characters(with white spaces) =%d \n ",totalletters);
    printf("Total Number of Words =%d \n ",words+1);
    printf("Total Number of letters only=%d \n ",onlychar);
    

    return 0;
}