#include<stdio.h>
int fun( int intType, float floatType, double doubleType, char charType, signed int si, short sho,long l, long double ld, signed char ch)
{
// sizeof evaluates the size of a variable
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of signed: %zu bytes\n", sizeof(si));
	printf("Size of float: %zu bytes\n", sizeof(sho));
	printf("Size of double: %zu bytes\n", sizeof(l));
	printf("Size of char: %zu byte\n", sizeof(ld));
	printf("Size of char: %zu byte\n", sizeof(ch));
	}
int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;
	signed int si;
	short sho;
	long l;
	long double ld;
	signed char ch;
	fun(1, 2,3,'g',4,2, 8, 4,'u');
}