/*Conditional operator or Ternary operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,greater;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    greater = (a>b) ? a : b;
    printf("Greatest number among a and b is :%d",greater);
    getch();
}
