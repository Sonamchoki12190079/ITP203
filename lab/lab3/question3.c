#include <stdio.h>
int main(){
	int amount;
	int option;
	int c, d; //c stands credit and d stand for debit//
	printf("enter initial amount");
	scanf("%d", &amount);
	if(amount>=1000){
		printf("1 for credit\n");
		printf("2 for debit\n");
		printf("3 for balance enquiry\n");
		scanf("%d", &option);
	switch(option){
	case 1:
// this function is used to transfer the amount from other account to your acount.
	printf("enter the amount that you want credit\n");
	scanf("%d",&c);
	int total_amount = amount + c;
	printf("your total_amount after credit is =%d",total_amount);
	break;
	case 2:
// this function used to transfer amount from your account to other account
	printf("enter the amount that you want to debit\n");
	scanf("%d",&d);
//this function is used to check whether your account has sufficient balance to transfer
	if(d<amount){
		int amount = amount - d;
		printf("Your total amount is = %d",amount);
	}
else{
	printf("invalid, your balance is not sufficient");
	break;
}
case 3:
	printf("Your balnce is =%d", amount);
	break;
	default:
	printf("sorry try again");
	}
}
else{
	printf("invalid , insufficient balance");
	}
}