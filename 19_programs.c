//calculate grade using conditional operator
#include<stdio.h>
#include<conio.h>
int main()
{
    float marks;
    printf("Enter marks of students:");
    scanf("%f",&marks);
    (marks>=90)?printf("Grade:A"):(marks>=80)?printf("Grade:B"):(marks>=70)?printf("Grade:C"):(marks>=60)?printf("Grade:D"):(marks>=40)?printf("Grade:E"):(marks>=0)?printf("Fail"):printf("Invalid marks");
    getch();
}

