#include<stdio.h>
#include<conio.h>
void main()
{

    int array[5],i;
    printf ("Enter number:\n");
    for(i=0;i<=4;i++)
    {
    scanf ("%d",&array[i]);
    }
    for(i=0;i<=2;i++)
    {
    printf ("%d",array[i]);
    }
    //printf ("%d",array[i]);//once use it
    //printf ("%d",array);//once use this only.


    /*
    int a[5]={1,2,3,4,5},i;
    for(i=0;i<=3;i++)
    {
    printf ("%d",a[i]);
    }
    */
    /*
    int a[5]={1,2,3,4,5,6,7,8,9},i;
    for(i=0;i<=5;i++)
    {
    printf ("%d",a[i]);
    }
    */

    /*
    int a[8]={1,2,3,4,5,6,7,8,9},i;
    for(i=0;i<=7;i++)
    {
    printf ("%d",a[i]);
    }
    */
    getch();
}
