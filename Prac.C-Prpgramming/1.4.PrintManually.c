#include<stdio.h>
#include<conio.h>
void main()



/*
//Remainder & Cofficient
{
    int n,a,b;
    printf ("Enter a number:");
    scanf ("%d",&n);
    a=n/2;
    b=n%2;
    printf ("%d is Remainder and %d is Cofficient.",b,a);
    getch();
}
*/

/*
//Enter 3 digit number and print them separately.
{
    int n,n1,n2;
    printf ("Enter a 3 digit number:");
    scanf ("%d",&n);
    n1=n%10;
    n=n/10;
    n2=n%10;
    n=n/10;
    printf ("%d\t%d\t%d",n,n2,n1);
    getch();
}
*/

/*
//Enter number and print its digits reverse using loop.
{
    int n,i,a;
    printf ("Enter digit number : ");
    scanf ("%d",&n);
    for (i=0;n!=0;i++)
    {
        a=n%10;
       printf ("%d",a);
       n=n/10;
    }
    getch();
}
*/


/*
//Enter number and print its digits seperately using loop.
{
    int n,i,a,rev=0;
    printf ("Enter number : ");
    scanf ("%d",&n);
    for (i=0;n!=0;i++)
    {
       a=n%10;
       rev=rev*10+a;
       n=n/10;
    }
    for (i=0;rev!=0;i++)
    {
       a=rev%10;
       printf ("%d\t",a);
       rev=rev/10;
    }
    getch();
}
*/



/*
//palindrome
{
    int x,a,i,rev=0,org;
    printf ("Enter number:");
    scanf ("%d",&x);
    org=x;
    for (i=0;x!=0;i++)
    {
        a=x%10;
        rev=rev*10+a;
        x=x/10;
    }
    if (org==rev)
    {
        printf ("Pallindrone.");
    }
    else
    {
        printf ("Not Pallindrome.");
    }
    getch();
}
*/

