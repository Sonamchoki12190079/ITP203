#include<stdio.h>
//creating function
void reverseStr(){
char str;
scanf("%c", &str);
if(str != '\n'){
reverseStr();
printf("%c",str);
}
}
//main method
int main(){
printf("Enter string to reversed: ");
reverseStr();
return 0;
}