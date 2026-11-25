/*Conditional operator program to check whether the given number is positive or non positive*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    a>0?printf("ENTERED NUMBER IS POSITIVE"):printf("ENTERED NUMBER IS NON POSITIVE");
    getch();
}