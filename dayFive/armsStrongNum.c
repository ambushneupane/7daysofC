#include <stdio.h>
int main(){
int sum=0, Orig_num,rem,inputNum;
    printf("Enter a number:-");
    scanf("%d",&inputNum);
   

Orig_num= inputNum;
while (inputNum!=0){
    rem=inputNum%10;
    sum += rem*rem*rem;
    inputNum /= 10;
}
// printf("%d",inputNum);
if (sum== Orig_num){
    printf("%d is an armstrong Number",Orig_num);
}
else{
    printf("%d is not an ArmsTrong Number",Orig_num);
}

return 0;
}