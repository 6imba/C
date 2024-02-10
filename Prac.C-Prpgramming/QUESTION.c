#include<stdio.h>
#include<conio.h>
void main ()

//print given number manually
{
    int n,i;
    printf ("Enter a number:");
    scanf ("%d",&n);
    for(i=1;n/10!=0;i++)
    {
        n[i]=n%10;
        n=n/10;
    }
    for(i=1;n/10!=0;i++)
    {
    printf ("%d\n",n[i]);
    }
    getch();
}
