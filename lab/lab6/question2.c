#include <stdio.h>
#include <stdlib.h>
int main(){
// declared and initalized it
// r for row, c for column, h for heigth
int row= 0;
int column =0;
int heigth =0;
int ***array;
int r, c, h;
//user input
printf ("Enter rows : ");
scanf ("%d", &row);
printf ("Enter columns : ");
scanf ("%d", &column);
printf ("Enter Width : ");
scanf ("%d", &heigth);
array = (int ***) calloc(heigth, sizeof(int ***));
for (h = 0; h < heigth; h++){
array[h] = (int **) calloc(row, sizeof(int*));
for (r = 0; r < row; r++){
array[h][r] = (int *) calloc(column, sizeof(int));
}
}
for (h = 0; h < heigth; h++) {
for (r = 0; r < row; r++) {
for (c = 0; c < column; c++) {
printf ("Enter Element in array[%d][%d][%d] : ", h, r, c);
scanf ("%d", &array[h][r][c]);
}
}
}
printf("Display 3D array");
for (h = 0; h < heigth; h++){
printf("Height %d\n", h);
for (r = 0; r < row; r++) {
for (c = 0; c < column; c++){
printf("%.2d ", array[h][r][c]);
}
printf("\n");
}
printf("\n");
}
return 0;
}