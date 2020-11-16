#include <stdio.h>
int main(){
	int a=7, b=1, c=5, d=3, e=4, f=9, g=9, h=6, i=2, j=1, k=3, ansA, ansB;/*declares variable
and initializes both part a and part b*/
	ansA = a*b-(c%d)*e+f;
	ansB = g^(h%i)+j*k;//This is a part b //
	printf("%d \n", ansA);
	printf("%d \n", ansB);
}