#include<stdio.h>
#include<conio.h>
int add(int x, int y);//or int add (int,int);
void main()
{
    /*int a,b,sum;//without function
    printf ("Enter two numbers:");
    scanf ("%d%d",&a,&b);
    sum=a+b;
    printf ("The sum is %d.",sum);
    getch();
}
*/
    int a,b,sum;
    printf ("Enter two numbers:");
    scanf ("%d%d",&a,&b);
    sum=add(a,b);
    printf ("The sum is %d.",sum);
    getch();
}
int add(int j, int k)
{
    int l;
    l=j+k;
    return l;
}
