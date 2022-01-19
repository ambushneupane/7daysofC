// Matrix Multiplication using arrays. 

#include <stdio.h>

void matrixElements(int matrix[20][20],int row,int col){ //IDk why i should not 
   for (int i=0;i<row;i++){
    for (int j=0;j<col; j++){
        printf("Matrix[%d][%d]:- ",i,j);
        scanf("%d",&matrix[i][j]);
       }

   }

}

void multiplication(int MatrixOne[20][20],int MatrixTwo[20][20],int FinalMatrix[20][20],int rowOne,int colOne,int rowTwo,int colTwo){
               printf("New matrix will be of size %dx%d and looks like this:-\n",rowOne,colTwo);
                  for (int i=0;i<rowOne;i++){
                     for (int j=0;j<colTwo;j++){
                        FinalMatrix[i][j]=0;
                           for (int k=0; k<colOne; k++){
                              FinalMatrix[i][j] += MatrixOne[i][k]*MatrixTwo[k][j]; 
                        }
                  }
            }
      }

void displayFinalMatrix(int resultMatrix[20][20],int row,int col){
   for (int i=0;i<row;i++){
    for (int j=0;j<col; j++){
        printf("%d\t",resultMatrix[i][j]);
    }
    printf("\n");

   }

}

int main(){
int matOne[20][20],matTwo[20][20],Finalmat[20][20],row1,row2,col1,col2;


printf("Enter the Rows and columns you want for matrix One:-");
scanf("%d%d",&row1,&col1);

printf("Enter the Rows and columns you want for matrix Two:-");
scanf("%d%d",&row2,&col2);

if(col1==row2){
      matrixElements(matOne,row1,col1); // Elements ofmatrix One
      matrixElements(matTwo,row2,col2);  // Elements of matrix Two

      multiplication(matOne,matTwo,Finalmat,row1,col1,row2,col2);

      displayFinalMatrix(Finalmat,row1,col2);
}

else{
    printf("Column of matrix One should be equal to Row of matrix Two.");
}
return 0;
}
