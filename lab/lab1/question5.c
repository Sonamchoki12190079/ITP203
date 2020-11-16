#include <stdio.h>
int main(){
	int A[] = {0,0,0,0,1,1,1,1};
	int B[] = {0,0,1,1,0,0,1,1};
	int C[] = {0,1,0,1,0,1,0,1,0};
		for(int x=0; x<8; x++){
		int Outcome = A[x] && B[x] && C[x];//And gate
		printf("%d AND %d AND %d=%d\n",A[x], B[x], C[x], Outcome);
	}
}