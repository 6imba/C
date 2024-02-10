#include<stdio.h>//Sum of no between 100 & 200 divisible by 7 but not 5.
#include<conio.h>
void main()
{
    int sum=0,i=100;
    for(i=100;i<=200;i++)
    {
        if(i%7==0 && i%5!=0)
           {
               sum=sum+i++;
            }
    }
    printf ("The sum if number between 100-200 divisible 7 and not divisible by 5 is %d.",sum);
}
