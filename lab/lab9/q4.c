#include <stdio.h>

struct Distance{
	int feet;
	float inch;
}d1,d2, outcome;

int main(){
	//take first distance user input
	printf("Entered the first distance\n");
	printf("Entered the feet: ");
	scanf("%d",&d1.feet);
	printf("Entered the inch: ");
	scanf("%f",&d1.inch);

	//take second distance user input
	printf("Entered the second distance\n");
	printf("Entered the feet: ");
	scanf("%d",&d2.feet);
	printf("Entered the inch: ");
	scanf("%f",&d2.inch);

	//adding two distance
	outcome.feet = d1.feet + d2.feet;
	outcome.inch = d1.inch + d2.inch;

	//compute inches to feet if greater than 12
	while(outcome.inch >=12.0){
		outcome.inch = outcome.inch -12.0;
		++outcome.feet;
	}
	printf("Sum of distance is = %d'-%.1f\"",outcome.feet,outcome.inch);
	return 0;
}