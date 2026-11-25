/*Find the greatest among the three numbers using conditional operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("a is greatest"):(b>a && b>c)?printf("b is grestest"):printf("c is greatest");
    getch();
}