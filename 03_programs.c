// program to calculate the sum of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum of %d and %d =%d",a,b,sum);
    getch();
}