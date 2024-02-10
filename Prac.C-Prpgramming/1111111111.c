#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    int n,i;
    printf ("Enter total number of alphabets of your name:");
    scanf ("%d",&n);
    printf ("Enter a name:");
    for(i=1;i<=n;i++)
    {
    scanf ("%s",name[i]);
    }
    //for(i=1;i<=2;i++)
    //{
    printf ("%s",name[1]);
    //}
    getch();
}
