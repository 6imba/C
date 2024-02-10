#include<stdio.h>
#include<conio.h>
int fact(int n);//DECLEAR
void main()
{
    int a,ans;
    printf ("Enter the number:");
    scanf ("%d",&a);
    ans=fact(a);//CALL
    printf ("The factorial of %d is %d.",a,ans);
}
//DEFINE
int fact (int x)
{
    int soln;
    if (x==0)
    {
        return 1;
    }
    else
    {
        soln=x*fact(x-1);//FUNCTION CALL ITSELF.Therefore this is not thing but RECCURSSION.
        return soln;
    }
}
