#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct library{
	char title[20];
	char name[20];
	int price;
	char status[10];
};
int main(){
	struct library record[50];
	int option;
	int n;
	char topic[20];
	char author[20];
	printf("\n");
	do{
		printf("Select any option from below \n");
		printf("1. Adding the book \n");
		printf("2. Displaying the book \n");
		printf("3. Listing book of specific author \n");
		printf("4. List the title of the specific book \n");
		printf("5. List count of the book \n");
		printf("6. Exit \n");
		printf("Enter you choice: \n");
		scanf("%d", &option);
		switch(option){
		case 1:
		printf("How many books you want to add \n");
		scanf("%d", &n);
		for(int i = 0; i<n; i++){
			printf("Enter the title of the book :\n");
			scanf("%s", record[i].title);
			printf("Enter the name of the author: \n");
			scanf("%s", record[i].name);
			printf("Enter the price of the book: \n");
			scanf("%d", &record[i].price);
			printf("Enter the status of the book: \n");
			scanf("%s", record[i].status);
			printf("\n");
			printf("------Book are successfully added------\n");
			printf("\n");
		}
		break;printf("\n");
		case 2:
		if(n==0){
			printf("The library is empty\n");
		}
		else{
			for (int i = 0; i < n; i++){
				printf("Title of the book : %s\n",record[i].title);
				printf("Name of the book : %s\n",record[i].name);
				printf("Price of the book: %d\n",record[i].price);
				printf("Status of the book : %s\n",record[i].status);
				printf("\n");
			}
		}
		printf("\n");
		break;
		printf("\n");
		case 3:
			printf("Enter the name of the author: ");
			scanf("%s", author);
			for(int i=0; i<n; i++){
				if(strcmp (record[i].name, author) == 0){
				printf("%s\n", record[i].title );
			}
		}
		break;
		printf("\n");
		case 4:
		printf("\n");
		printf("Enter the title of the book:\n");
		scanf("%s", topic);
		printf("Details of the book\n");
		for (int i = 0; i < n; ++i){
			if(strcmp(record[i].title, topic)==0){
				printf("Author name : %s\n",record[i].name );
				printf("Price of the book : %d\n",record[i].price);
				printf("Status of the book : %s\n",record[i].status );
			}
		}
		printf("\n");
		break;
		printf("\n");
		case 5:
		printf("The number of the book is : %d\n",n );
		printf("\n");
		break;
		case 6:
		exit(0);
		default:
		printf("Invalid");
	}
}
while(option != 6);
return 0;
}