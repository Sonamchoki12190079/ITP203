#include <stdio.h>
int main(){
	int array[] = {2,4,7,8,9,10};

	for(int i=0;i<6;i++){
		for(int k=0;k<6;k++){
			
			if(array[i]>=0 && array[k] >=0 && array[i] % 2==0 && array[k]%2 !=0){
				int temp = array[i];
				array[i]==array[k];
				array[k]==temp;
			}
			else if(array[i]>=0 && array[k] >=0 && array[i] % 2!=0 && array[k] % 2 ==0){
				int temp = array[i];
				array[i]= array[k];
				array[k]=temp;
			}
		}
	}

	for(int i= 0; i <6; i++){

		printf("%d\n", array[i]);
	}
}