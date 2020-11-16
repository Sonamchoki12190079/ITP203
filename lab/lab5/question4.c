#include <stdio.h>
#include<string.h>
int main()
{
int i, j, found = 0;
char *country[4][2] ={
{ "Bhutan" },
{ "India" },
{ "Australia" },
{ "Iceland" }}, name[20];
char *capital[4][2] ={
{ "Thimphu" },
{ "Dehli" },
{ "Canberra" },{ "Reykjavik" }
};
printf("Enter Country Name: \n");
scanf("%s",&*name);
for(i = 0; i < 4; i++){
if(strcmp(name, *country[i]) == 0 ){
found = 1;
break;
}
}
if(found==1){
printf("\nThe Capital City Of %s Is %s.\n", name, &*capital[i][j]);
}
else{
printf("Not in the list.\n");
}
return 0;
}