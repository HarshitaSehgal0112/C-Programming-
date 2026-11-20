/*Bitwise operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n");
    scanf("%d",&b);
    printf("Bitwise AND :%d\n",a&b);
    printf("Bitwise OR :%d\n",a|b);
    printf("Bitwise XOR :%d\n",a^b);
    printf("Bitwise Left shift :%d\n",a<<b);
    printf("Bitwise Right shift :%d\n",a>>b);
    getch();
}