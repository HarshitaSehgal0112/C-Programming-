/*Convert celsius to fahrenheit*/
#include<stdio.h>
#include<conio.h>
int main()
{
   float celsius,fahrenheit;
   printf("Enter temperature in celsius:");
   scanf("%f",&celsius);
   fahrenheit=(celsius*9/5)+32;
   printf("Temperature in fahrenheit:%f",fahrenheit);
   getch();
}
