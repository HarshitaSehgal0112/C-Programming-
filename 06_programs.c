/* Relational operators in c
program to compare two numbers using relational operators */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a=\n");
    scanf("%d",&a);
    printf("Enter the value of b=\n");
    scanf("%d",&b);
    printf("a<b is %d",a<b);
    printf("a<=b is %d",a<=b);
    printf("a>b is %d",a>b);
    printf("a>=b is %d",a>=b);
    printf("a==b is %d",a==b);
    printf("a!=b is %d",a!=b);
    getch();
}