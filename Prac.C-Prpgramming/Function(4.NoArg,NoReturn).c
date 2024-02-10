#include<stdio.h>
#include<conio.h>
void add ();//or void main(void//Function Declaration
void main()
{
    add();//Function Call
    getch();
}
void add()//or void main(void)//Function Defination
{
    int a,b,sum;
    printf ("Enter two numbers:");
    scanf ("%d%d",&a,&b);
    sum=a+b;
    printf ("The sum is %d.",sum);
}
