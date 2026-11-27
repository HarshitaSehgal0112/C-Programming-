//conditional operator to find the type of triangle
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    (a+b>c && a+c>b && b+c>a)?((a==b && b==c && a==c)?printf("Equilateral triangle"):(a==b || b==c || a==c)?printf("Isosceles triangle"):printf("Scalene triangle")):printf("Invalid triangle");
    getch();
}