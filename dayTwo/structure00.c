// User defined data type with the keyword struct which has it's own independent memory


//Simple program to demonstrate the use structure.
 
  struct student  {
         char name[20];
         int rollNo;
         int age;
         float GPA;

     };


void dynamicallyAsking(){

    struct student s1;
    printf("ENter Name:-");
    scanf("%s",s1.name);
    printf("Age:-");
    scanf("%d",&s1.age);
    printf("Roll NO:-");
    scanf("%d",&s1.rollNo);
    printf("GPA:-");
    scanf("%f",&s1.GPA);

     printf("Name is:-%s\n",s1.name);
     printf("Age:-%d\n",s1.age);
     printf("Roll Number:-%d\n",s1.rollNo);
     printf("Class XII GPA:-%f\n",s1.GPA);

}
 
 #include <stdio.h>
 int main(){
     struct student s1={
         "Ambush Neupane",4,18,3.14
         };

     printf("Name is:-%s\n",s1.name);
     printf("Age:-%d\n",s1.age);
     printf("Roll Number:-%d\n",s1.rollNo);
     printf("Class XII GPA:-%f\n",s1.GPA);

    // dynamicallyAsking();

    

     return 0;
 }


