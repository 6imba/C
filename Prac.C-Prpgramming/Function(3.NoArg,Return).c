#include<stdio.h>
#include<conio.h>
int add (void);//Function Declaration
void main()
{
    int plus;
    plus=add();//Function Call
    printf ("The sum is %d.",plus);
    getch();
}
int add(void)//Function Defination
{
    int a,b,sum;
    printf ("Enter two numbers:");
    scanf ("%d%d",&a,&b);
    sum=a+b;
    return sum;
}
