#include <stdio.h>
#include <string.h>

struct meal{
	char name[30];
	float calories;
	char type[20];
	int costs;
};
int main(){
	struct meal record[4];
	for (int i = 0; i<4; ++i){
		//user input

		printf("%d type of food:\n",i+1);
		printf("Enter the name of the food: \n");
		scanf("%s", record[i].name);
		//calories of food
		printf("Enter the calories: \n");
		scanf("%f", &record[i].calories);
		//type of food
		printf("Enter the type of food like meat or fruit: \n");
		scanf("%s", record[i].type);
		//The total cost of food
		printf("cost of the food: \n");
		scanf("%d", &record[i].costs);
		printf("\n");
	}
	for (int i = 0; i < 4; ++i){
		printf("Name of the food : %s\n",record[i].name);
		printf("Calories of the food : %f\n",record[i].calories);
		printf("Type of the food : %s\n",record[i].type);
		printf("Cost of the food : %d\n",record[i].costs);
		printf("\n");
	}
return 0;
}