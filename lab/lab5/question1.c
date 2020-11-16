#include<stdio.h>
//declare the variable and initalized it
int num, p, i;//p for position
int size = 5;
int insertion(int array[]){
printf("Enter the number to be insert:\n");
scanf("%d",&num);
printf("Enter the position in arary:\n");
scanf("%d",&p);
//make space for new array element
for(i = size - 1; i>=p-1; i--){
array[i+1] = array[i];
}
array[p-1] = num;
//display array after insert opreration
printf("array after insertion:\n");
for(i = 0; i<=size; i++)
printf("%d\n",array[i]);
return 0;
}
int deletion(int array[]){
printf("Enter the element position: \n");
scanf("%d",&p);
if(p >= size + 1){
printf("It is impossible to delete\n");
}
else{
for(i = p -1; i < size-1; i++)
array[i] = array[i+1];
printf("array after deletion:\n");
for(i = 0; i < size -1; i++)
printf("%d\n",array[i]);
}
return 0;
}
void SumOfEvenOdd(int array[]){
//declared and initalized it
int odd =0;
int even =0;
for( i = 0; i < size; i++){
//display even number
if(array[i]%2==0){
even = even+array[i];
}//display odd number
else{
odd = odd + array[i];
}
}
printf("The sum of even numbers is:%d", even);
printf("The sum of odd numbers is:%d", odd);
}
int concate()
{
int a[20];
int p[4] = {1, 3, 4, 9};
int q[8] = {0, 1, 4, 6, 9, 4};
int x, index, f_len, s_len;
f_len = s_len = 5;
index = 0;
for(x = 0; x < f_len; x++) {
a[index] = p[x];
index++;
}
for(x = 0; x < s_len; x++) {
a[index] = q[x];
index++;
}
printf("\nThe first array is: ");
for(x = 0; x < f_len; x++)
printf(" %d", p[x]);
printf("\nThe second array is: ");
for(x = 0; x < s_len; x++)
printf(" %d", q[x]);
printf("\nThe concatenated array is: ");
for(x = 0; x < 10; x++)
printf(" %d", a[x]);
return 0;
}
int main(){
//calling function
int array[] = {1,5,3,2,6};
insertion(array);
deletion(array);
SumOfEvenOdd(array);
concate(array);
}