#include <stdio.h>
#include <stdlib.h>
int main()
{
int x, i, *ptr, sum = 0;
printf("Enter number of the elements: ");
scanf("%d", &x);
ptr = (int*) malloc(x * sizeof(int));
// if memory cannot be allocated
if(ptr == NULL)
{
printf("Error! memory not allocated.");
exit(0);
}
printf("Memory is successfully allocated\n");
printf("Enter the values: ");
for(i = 0; i < x; ++i)
{
scanf("%d", ptr + i);
sum += *(ptr + i);
}
//printing the array elements using pointer to the location
printf("The elements of the array are: \n");
for(i = 0; i < x; i++){
printf("%d \n",ptr[i]);
}
// deallocating the memory
free(ptr);
printf("Memory Delocated\n");
printf("Agin allocating memory using calloc\n");
printf("Enter number of elements: ");
scanf("%d", &x);
ptr = (int*) calloc(x, sizeof(int));
if(ptr == NULL)
{
printf("Error! memory not allocated.");
exit(0);
}
printf("Memory has been successfully allocated\n");
printf("Enter elements: ");
for(i = 0; i < x; ++i)
{
scanf("%d", ptr + i);
sum += *(ptr + i);
}
//printing the array elements using pointer to the location
printf("The elements of the array are: \n");for(i = 0; i < x; i++)
{
printf("%d \n",ptr[i]); // ptr[i] is same as *(ptr + i)
}
// deallocating the memory
free(ptr);
printf("Memory Delocated\n");
return 0;
}