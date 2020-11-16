#include <stdio.h>
int main(){
	char z;
	printf("Enter any alphabet: ");scanf("%c,", &z);
// evaluates to 1 if variable z in a lowercase vowel//
	if(z=='a'|| z=='e'||z=='i'||z=='o'|| z=='u'){
	printf("This alphabet is a vowel \n");
	}
// evaluates to 1 if variable z in a uppercase vowel//
	else if(z=='A'|| z=='E'||z=='I'||z=='O'|| z=='U'){
	printf("This alphabet is a vowel \n");
	}
	else{
	printf("It is not a vowel. It is consonant");
	}
}