// Arithmetic operator in c
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,add,sub,mul,division,mod;
    printf("Enter the first number=");
    scanf("%d",&a);
    printf("Enter the second number=");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    division=a/b;
    mod=a%b;
    printf("Addition=%d\n",add);
    printf("Subtraction=%d\n",sub);
    printf("Multiplication=%d\n",mul);
    printf("Division=%d\n",division);
    printf("Modulus=%d",mod);
    getch();
}