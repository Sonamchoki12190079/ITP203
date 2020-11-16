#include <stdio.h>
int main(){
//declare the array//
	char array1[2][4] = {{'A','B','C','D'},{'a','b','c','d'}};
	char array2[2][4] = {{'A','B','C','D'},{'E','F','G','H'}};
//this function is for first for loop//
	for(int i=0;i<2;i++){
//second for loop//
	for(int j=0;j<4;j++)
	{
		int x=array1[i][j];
		int y=array2[i][j];
		int outcome=(x==y);
		printf("\n%d",outcome);
		}
	}
}