#include <stdio.h>
struct complex{
	int real;
	int img;

};
int main(){
	struct complex a, b, sum;
	printf("The first complex number are:\n");
	printf("Enter a and b where a and b will be a + bi .\n");
   	scanf("%d%d", &a.real, &a.img);
   	printf("The second complex number are\n");
   	printf("Enter sum and d where sum and d will be sum + id .\n");
   	scanf("%d%d", &b.real, &b.img);

  	sum.real = a.real + b.real;
   	sum.img = a.img + b.img;

   	printf("Sum of the complex numbers: (%d) + (%di)\n", sum.real, sum.img);

   	return 0;
}