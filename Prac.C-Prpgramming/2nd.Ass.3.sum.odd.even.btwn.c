#include<stdio.h>
#include<conio.h>
void main()
{
    int odd=0,even=0,i;
    for(i=1;i<=100;i++)
    {
    if(i%2!=0)
    {
    odd=odd+i;
    }
    else
    {
    even=even+i;
    }
    }
    printf ("Between 1-100 the sum of odd number is %d and even number is %d.",odd,even);
}
