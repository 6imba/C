#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()

{
    int x,a,b;
    int c=3000;
    long int r;
    double q;
    float y;//double float %e or %E
    printf ("Enter a number:");
    scanf ("%d",&x);
    y=sqrt(x);//Square Root
    printf ("Square root of %d is %f.\n",x,y);
    getch();
    printf ("Enter the power value:");
    scanf ("%d",&a);
    b=pow(x,a);//a to the Power x
    printf ("The %d to the power of %d is %d.",a,x,b);
    r=(b*10000);
    printf ("\n%ld.",r);
    q=(c*100000);
    printf ("\n%Lf.",q);//CAPITAL L for double
    getch();
}

