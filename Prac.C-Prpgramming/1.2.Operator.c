#include <stdio.h>
#include <conio.h>
void main ()

//Ternary Operator
{
    int a,b,c,d,great;
    printf ("Enter 4 numbers : ");
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    great =(a>b)?((a>c)?((a>d)?a:d):((c>d)?c:d)):((b>c)?((b>d)?b:d):((c>d)?c:d));
    printf ("%d is greater.",great);
    getch();
}


