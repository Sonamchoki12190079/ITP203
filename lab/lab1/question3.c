#include <stdio.h>
int main(){
	for(int i=5; i>=1; --i){//decrement the loop//
		for(int j=0; j<i; ++j)	{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}