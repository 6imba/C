#include<stdio.h>
#include<conio.h>
void main()
{
    char name[5],i;
    printf ("Enter name:");
    for (i=0;i<=4;i++)
    {
        scanf ("%d",&name[i]);
        printf ("%d",name[i]);
    }
    getch();
}
