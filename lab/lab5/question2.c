#include <stdio.h>
//creating function
int LargestNumber(int array[3][5][5], int n){
//declared variable
int i, j,k;
int maximum = array[0][0][0];
for( i=0;i<3;i++){
for(j=0;j<5; j++){
for(k=0;k<5;k++){
if(array[i][j][k] > maximum)
maximum =array[i][j][k];
}
}
}
return maximum;
}
//main method
int main(){
//matrices
int array[3][5][5]={
{1, 2, 3, 4, 5,
6, 7, 8, 9, 10,
11, 12,13,14,15,
16,17,18,19,20,
21,22,23,24,25},
{26,17,28,2,0,
1,32,33,34,5,
3,37,4,39,4,
1,2,4,4,4,4,47,8,49,0},
{51,5,53,5,55,
56,57,8,59,60,
6,6,3,6,65,
6,7,6,69,7,
1,2,3,74,5}
};
int n=sizeof(array)/sizeof(array[0][0][0]);
printf("largest number in given array is %d\n", LargestNumber(array,n));//call function
return 0;
}