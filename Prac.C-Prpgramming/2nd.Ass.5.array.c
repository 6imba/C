#include<stdio.h>
#include<conio.h>
void main()
{
    int i,size[100],n,even=0,odd=0;
    printf ("Enter total no.s of data:");
    scanf ("%d",&n);
    printf ("INPUT total datas:\n");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&size[i]);
    }
    for(i=0;i<n;i++)
    {
        if (size[i]%2==0)
        {
            even=++even;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf ("There are %d even numbers and %d odd number.",even,odd);
    getch();
}

