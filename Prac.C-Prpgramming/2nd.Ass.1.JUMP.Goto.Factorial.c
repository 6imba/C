#include<stdio.h>//Factorial of n value no.
#include<conio.h>
void main()
{
    int n,i=1,org;
    printf ("Enter the number:");
    scanf ("%d",&n);
    org=n;
    label:
    n=n*(org-i);
    i=i+1;
    if(org-i>=1)
    {
    goto label;
    }
    printf ("The factorial is %d.",n);
}
