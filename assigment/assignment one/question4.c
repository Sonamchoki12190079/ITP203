#include <stdio.h>
int main(){
//initialize the variable
	int f, f1, f2, size, i;
	printf("enter any number to find the fibonacci series: ");
	scanf("%d", &size);// this function is used that allow user to enter the required number or value
//declared the variable
	i = 1;
	f1 = 0;
	f2 = 1;
//checks the condition
	while(i<=size){
		printf("\t%d",f1);
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		i++;//increment the i value by 1
	}
return 0;
}