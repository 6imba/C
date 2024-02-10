#include<stdio.h>
#include<conio.h>
void main()

/*
//print odd statement
{
 int a=0;
 while(a<10)
 {
    a++;
    if(a%2==0)//if this condition is true it jumps or continues from head of while loop if not then run smoothly
    continue;
    printf("\nStatement %d.",a);
 }
    printf("\nEnd of Program.");
}
*/


//print number from 1-100 except number divisible by 10.
{
    int i;
    printf ("Answer:\n");
    for(i=1;i<=100;i++)
    {
        if (i%10==0)
    continue;
        {
    printf ("%d\t",i);
        }
    }
    getch();
}

