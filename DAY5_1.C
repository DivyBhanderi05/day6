#include<stdio.h>
#include<conio.h>
main(){
int a;
int b;
int c;
       clrscr();
       printf("Enter value of A : ");
       scanf("%i",&a);
       printf("Enter value of B : ");
       scanf("%i",&b);
       c=a;
       a=b;
       b=c;
       printf("Value of A after swap : %i\n",a);
       printf("Value of B after swap : %i",b);
       getch();



}