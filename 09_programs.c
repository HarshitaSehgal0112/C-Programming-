/*Logical operator program*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=12,b=5;
    printf("Logical AND : %d %d\n",a<b && a>b,a!=b && a>b);
    printf("Logical OR :  %d %d\n",a<b || a>b,a!=b || a>b);
    printf("Logical NOT :  %d\n",!(a<=b));
    getch();
}