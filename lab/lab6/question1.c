#include <stdio.h>
#include <stdlib.h>
int main(){
int n, *ptr, x;//declared the variable
//user input
printf("\nEnter the number of elements: \n");
scanf("%d",&n);
ptr = (int *) malloc(n*sizeof(int));
if(ptr == NULL){// if array is empty
printf("sorry, memory are not allocated");
exit(0); //end of program
}
// Memory has been successfully allocated
else{
printf("Memory successfully allocated using malloc");
}
printf("\nEnter the elements in array:\n");
for(int i=0; i< n; i++){
scanf("%d", &x);// storing elements at contiguous memeory locations
ptr[i]=x;
}
printf("Duplicate elements in given array:\n");//calculate length of array array ptr
// finding the duplicate element
for(int j=0; j < n; j++){
for(int k = j+1; k < n; k++){
if(ptr[j] == ptr[k])
printf(" %d ", ptr[k]);
}
}
free(ptr);
return 0;
}