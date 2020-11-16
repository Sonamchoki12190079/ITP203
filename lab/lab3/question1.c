#include <stdio.h>
int main(){
	int marks;
	printf("Enter your marks ");
	scanf("%d", &marks);
	if(marks<=100 && marks>=0){
	switch(marks/10){
		case 10:
		case 9:
//This function is marks equal or greater than 90
		printf("congratualation your grade is A+");
		break;
		case 8:
//marks between 80 to 89
		printf("congratualation and very good, your grade is A");
		break;
		case 7:
//marks between 70 to 79
		printf("good your grade is B+");
		break;
		case 6:
//marks between 60 to 79
		printf("good your grade is B");
		break;
		case 5:
//marks between 50 to 69
		printf("you have to put more effort on study since you grade is C+");
		break;
		case 4 :
//marks between 40 to 59
		printf("put more effort on study, your grade is C");
		break;
		case 3:
//marks between 30 to 49
		printf("sorry your grade is D");
		break;
		case 2:
//mark between 20 to 39
		printf("sorry your grade is F and your are failed");
		break;
		default:
		printf("please try once more");
	}
}
else
	printf("wrong input");
}