// program to check whether the number is positive or non positive using if statement
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the value of x=");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive");
    }
    if(x<=0)
    {
        printf("Non Positive");
    }
    getch();
}