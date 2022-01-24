//program to compare two strings.
#include <stdio.h>
// #include <string.h>

// int main(){
//     char str1[10]="Hello",str2[10]="HEllo",str3[10]="hEllO";
//     int res;
//     res= strcmp(str1,str2);
//     printf("strcmp(str1,str2)=%d\n",res);

//     res= strcmp(str2,str3);
//     printf("strcmp(str2,str3)=%d\n",res);

//     return 0;
// }
void strcomp(){
    int flag=0;
    char str1[20],str2[20];
    printf("Enter first string.");
    gets(str1);
    
    printf("Enter Second string.");
    gets(str2);

    for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++){
        if (str1[i]!=str2[i]){
            flag =1;
            break;
        }
    }
    if(flag==1){
        printf("%s and %s are not same.",str1,str2);
    }
    else{
        printf("Given strings are equal");
    }
    
}
int main(){
    strcomp();
    return 0;
}