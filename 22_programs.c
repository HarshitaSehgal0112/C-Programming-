// program to check whether the number is divisible by 5 or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter the number=");
    scanf("%d",&x);
    if(x%5)
    {
        printf("Non divisible by 5");
    }
    else
    {
        printf("Divisible by 5");
    }
    getch();
}