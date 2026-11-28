// program to check whether the number is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the number=");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    getch();
}