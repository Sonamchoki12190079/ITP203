#include <stdio.h>
void calculater(int x,int y){
	int option,sum,subs,div,mod,mult;//declared the varible
	printf("Enter any operation that you want to do\n");//user can select the option that they want perform opertion
	printf("1 for addition\n");
	printf("2 for substraction\n");
	printf("3 for division\n");
	printf("4 for modules\n");
	printf("5 for multplication\n");
	scanf("%d",&option);

	switch(option){
		case 1:
		sum = x + y;
		printf("The total addition of two value is=%d",sum);
		break;

		case 2:
		subs = x - y;
		printf("The outcome is = %d",subs);
		break;

		case 3:
		printf("The answer is = %d",div);
		break;

		case 4:
		printf("A outcome is = %d",mod);
		break;

		case 5:
		printf("The answer is =%d",mult);

	}

}
int main(){
	int a,b;
	printf("Enter any two number to perform an opertion\n");//user input
	scanf("%d %d",&a,&b);
	calculater(a,b);

}