#include <stdio.h>
int main(){
	//declared the varibale
	int Id = 12190079;
	int pass = 5098;
	int enrollement;
	int password;
	//user input
	printf("Enter your enrollement Id\n");
	scanf("%d",&enrollement);
	//nested loop
	if(Id==enrollement){
		printf("Enter your password\n");
		scanf("%d",&password);

		if(password == pass){
			printf("Thank for register");
		}
		else{
			printf("Incorrect password, try once more");
		}
	}
	else{
		printf("Incorrect enrollement id, try once again");
	}
}