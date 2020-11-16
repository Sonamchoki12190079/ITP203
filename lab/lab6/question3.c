#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int funoperation(int *ptr, int pro, int n, int mean, int sum)
{
//product
for (int i = 0; i < n; i++)
pro = pro * ptr[i];
printf("The product is: %d\n", pro);
//mean
int i;
for(i=0;i<n;i++)
{
sum = sum+ ptr[i];
}
mean=sum/6;
printf("The mean is: %d\n", mean);
//standard deviation
int sumsq;
int dev;
for(int i=0;i<n;i++)
{
dev = ptr[i] - mean;
sumsq += dev * dev;
}
int variance = sumsq/(int)n;
int std_dev = sqrt(variance);
printf("Standard Deviation is %d\n", std_dev);
}
int main()
{
int n;
int i;
int *ptr;
int sum = 0;int mean;
int pro = 1;
int std_dev = 0;
printf("Enter number of elements: ");
scanf("%d", &n);
// dynamic memory allocation using malloc()
ptr = (int *) malloc(n*sizeof(int));
//if empty array
if(ptr == NULL){
printf("Error! Memory not allocated\n");
return 0;
}
printf("Enter elements of array:\n");
for(i = 0; i < n; i++)
{
//storing elements at contiguous memory locations
scanf("%d", ptr+i);
sum = sum + *(ptr + i);
}
//printing the array elements using pointer to the location
printf("The elements of the array are: \n");
for(i = 0; i < n; i++)
{
printf("%d \n",ptr[i]); // ptr[i] is same as *(ptr + i)
}
funoperation(ptr, pro, n, mean, sum);
//freeing memory of ptr allocated by malloc using the free() method
free(ptr);
return 0;
}