#include <stdio.h>
void Binary_num(int x){
	int reminder;
	reminder = x%2;
	x = x/2;
	printf("%d",reminder);

	if(x==0){
		return ;
	}else{
		Binary_num(x);
	}
}
int main(){
	int number;
	printf("Enter the any number\n");
	scanf("%d",&number);
	Binary_num(number);
}