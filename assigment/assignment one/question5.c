#include <stdio.h>
int main(){
// initialize and declared the variable
	int num,r,c, sum = 0, temp;
	printf("Enter any three digit number");
	scanf("%d", &num);
	temp = num;
/* loop to calaculate the sum of the cubes */
	while(num>0)
	{
		r = num% 10;
		c=r*r*r;
		sum=sum+c;
		num = num/10;
	}
/*if else condition to print Armstrong */
if(temp== sum){
	printf(" this is an Armstrong number.\n");
}
else{
	printf("This is not an Armstrongnumber.\n");
	}
num= temp;
}