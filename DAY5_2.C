#include<stdio.h>
#include<conio.h>
main(){
int a;
int b;
clrscr();
printf("enter value of A: ");
scanf("%d",&a);
printf("enter value of B: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap A: %d\n",a);
printf("after swap B: %d",b);
getch();
}