#include <stdio.h>
void Swapelement(int *e, int *f, int *g, int *h);// call function
int main(){
int e1, e2, e3, e4;// declared the four variable
/*This function is used to allow the user to input value of variable*/
printf("Enter the first value of element : ");
scanf("%d",&e1);
printf("Enter the second value of element: ");
scanf("%d",&e2);
printf("Enter the third value of element: ");
scanf("%d",&e3);
printf("Enter the fourth value of element: ");
scanf("%d",&e4);
// this function will display the result of element before swapping
printf("Element before swapping are:\n");
printf("first ele=%d\n second ele =%d\n third ele = %d\n fourth ele= %d\n",e1,e2,e3,e4);
Swapelement(&e1,&e2,&e3,&e4);
// print the element after swapping
printf("Element after swapping are:\n");
printf("first ele=%d\n second ele =%d\n third ele= %d\n fourth ele= %d\n",e1,e2,e3,e4);
return 0;
}
void Swapelement(int *e, int *f, int *g, int *h){
// swapping the element
int choki;
choki =*f;
*f = *e;
*e = *g;
*g = *h;
*h = choki;
}