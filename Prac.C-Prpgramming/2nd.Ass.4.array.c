 #include<stdio.h>
#include<conio.h>
void main()
{
    int i,size[100],n;
    printf ("Enter total no.s of data:");
    scanf ("%d",&n);
    printf ("INPUT total datas:\n");
    for(i=0;i<n;i++)
    {
        scanf ("%d",&size[i]);
    }
    for(i=0;i<n;i++)
    {
        printf ("%d",size[i]);
    }
    getch();
}
