/*Assignment operator program*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("Initial value is=%d\n",a);
    a+=5;
    printf("After a+=5 :%d\n",a);
    a-=5;
    printf("After a-=5 :%d\n",a);
    a*=5;
    printf("After a*=5 :%d\n",a);
    a/=5;
    printf("After a/=5 :%d\n",a);
    a%=5;
    printf("After a%=5 :%d\n",a);
    getch();
}