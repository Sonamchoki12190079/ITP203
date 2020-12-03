#include <stdio.h>
#include<string.h>

struct student{
	int id;
	char name[20];
	float percentage;
};
int main(){
	struct student record = {0};
	//struct student record;
	record.id = 121;
	strcpy(record.name,"Sonam");
	record.percentage = 80.0;


	printf("id is :%d\n",record.id);
	printf("Name is:%s\n",record.name);
	printf("The percentage is: %f\n",record.percentage);
	return 0;

}