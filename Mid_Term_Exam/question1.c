#include <stdio.h>
int main(){
	//declare and initalize it.
	int A[] = {0,0,0,0,1,1,1,1};
	int B[] = {0,0,1,1,0,0,1,1};
	int C[] = {0,1,0,1,0,1,0,1,0};
	int i, x;//x for total outcome
	//for loop
	for(int i=0;i<8;i++){
		//using product method

		x = A[i] && B[i] && C[i]
		//Outcome of AND Gate
		printf("\n %d AND %d AND %d = %d",A[i],B[i],C[i],x);
		
	}
}