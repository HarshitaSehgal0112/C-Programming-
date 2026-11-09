/* Relational operators in c
program to compare two numbers using relational operators */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5;
    printf("Original value=%d\n",a);
    printf("Post increment=%d\n",a++);
    printf("Pre increment=%d\n",++a);
    printf("Post decrement=%d\n",a--);
    printf("Pre decrement=%d\n",--a);
    printf("Size of a=%d\n",sizeof(a));
    getch();
}