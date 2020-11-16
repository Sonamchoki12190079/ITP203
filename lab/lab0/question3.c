#include <stdio.h>
int main(){
	int a, b;//declare the variable//
	printf("Enter any two values: ");
	scanf("%d,%d", &a,&b);// It is used to get the value from user//
/*
 Performs all arithmetic operations
 */
	int Addition = a+b;
	int Subtraction = a-b;
	int Multiplication = a*b;
	int Division = a/b;
	int Modular_Division = a%b;
/* Prints the result of all arithmetic operations */
	printf("Addition = %d\n Subtraction = %d\n Multiplication = %d\n Division = %d\nModulus_Division = %d\n", Addition,Subtraction,Multiplication,Division,Modular_Division);
	return 0;
}