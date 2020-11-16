#include <stdio.h>
//creating function
void leapyear(int *year){
int temp =*year;
if(temp%4==0){
printf("yes, It is a leap year");
}
else{
printf("Not leap year");
}
}
int main(){
int year;//initialized the variable
//This function is used to allow user the user to input the value
printf("Enter the year:");
scanf("%d",&year);
leapyear(&year);//call function
return 0;
}