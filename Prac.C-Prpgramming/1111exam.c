#include<stdio.h>
#include<conio.h>
void main()

/*
{
    int n,i,x[100],great,small;
    printf ("Enter the total number of numbers:");
    scanf ("%d",&n);
    printf ("Enter the numbers:\n");
    for (i=1;i<=n;i++)
    {
        scanf ("%d",&x[i]);
    }
    great=small=x[1];
    for (i=1;i<=n;i++)
    {
        if (great<x[i])
        {
            great=x[i];
        }
        if (small>x[i])
        {
            small=x[i];
        }
    }
    printf ("%d is great and %d is small.",great,small);
    getch();
}
*/


{
    int i,n=54321;
    printf ("%d",n);
    for (i=1;i<=4;i++)
    {
        n=n/10;
        printf ("\n%d",n);
    }
    getch();
}
