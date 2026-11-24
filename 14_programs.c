/*Area of circle*/
#include<stdio.h>
#include<conio.h>
int main()
{
   int radius;
   float area;
   float pi=3.14;
   printf("Radius=");
   scanf("%d",&radius);
   area=pi*radius*radius;
   printf("Area of circle=%f",area);
   getch();
}