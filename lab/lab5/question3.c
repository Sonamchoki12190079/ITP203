#include <stdio.h>
int main(){
int array[5][5], transpose[5][5],row,column, i, j;//declared and initalize the size of array,
printf("Enter the rows and column:\n");//size of row and column
scanf("%d %d",&row,&column);
//assigned the element in matrices
printf("Enter the element in matrices \n");
for(i = 0;i < row; ++i)
for(j = 0;j < column;++j){
printf("Enter element in array%d%d:", i+1, j+1);
scanf("%d", &array[i][j]);
}
//print the matrices before transpose
printf("\nEnter matrices before transpose\n");
for(i=0;i<row;++i)
for(j=0;j<column;++j){
printf("%d",array[i][j]);
if(j == column - 1)
printf("\n");
}//finding the transpose of matrix in array
for(i = 0;i < row; ++i)
for(j = 0;j < column; ++j){
transpose[j][i] = array[i][j];
}
// Displaying the transpose of matrix array
printf("\nTranspose of the matrix are:\n");
for (i = 0; i < column; ++i)
for (j = 0; j < row; ++j) {
printf("%d ", transpose[i][j]);
if (j == row - 1)
printf("\n");
}
return 0;
}