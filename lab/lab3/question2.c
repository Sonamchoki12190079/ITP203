#include <stdio.h>
int main(){
	char alphabet;
/* input vowel letter from user*/
	printf("enter any alphabet");
	scanf("%c",&alphabet);
/* Switch alphabet value */
	switch( alphabet){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	printf("it is a vowel alphabet");
	break;
	default:
	printf("it is not vowel alphabet");
}