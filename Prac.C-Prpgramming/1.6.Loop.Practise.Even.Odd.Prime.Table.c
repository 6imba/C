#include<stdio.h>
#include<conio.h>
void main()

/*
//total number of even and odd number and their sum form 1-20.
{
    int i,even=0,odd=0,e=0,o=0;
    //for (i=1;i<=20;i++) //for loop
    i=1; //while loop initialization also do while loop initialization
    //while(i<=20) //while loop condition
    do
    {
        if(i%2==0)
        {
            e++;
            even+=i;
        }
        else
        {
            o++;
            odd+=i;
        }
        i++; //while loop inicrement decrement and also do while loop inicrement decrement
    }while (i<=20);
    printf ("Total EVEN number:%d",e);
    printf ("\nTotal ODD number:%d",o);
    printf ("\nThe sum of total EVEN number is %d AND The sum of total ODD number is %d.",even,odd);
    getch();
}
*/


/*
//Table of inputed number
{
    int numb,i,result;
    printf ("Enter a number:");
    scanf ("%d",&numb);
    for (i=1;i<=10;i++)
    {
        result=numb*i;
        printf ("%d*%d=%d\n",numb,i,result);
    }
    getch();
}
*/

/*
//Table from 1-10
{
    int numb,i,result;
    printf ("Table From 1-10:\n");
    for(numb=1;numb<=10;numb++)
    {
    for (i=1;i<=10;i++)
    {
        result=numb*i;
        printf ("%d*%d=%d\n",numb,i,result);
    }
    }
    getch();
}
*/


//chech prime or not
{
    int n,i,x=0;
    printf ("Enter a number:");
    scanf ("%d",&n);
    for (i=2;i<=9;i++)
    {
    if (n%i==0)//given number divided by 2-9
    {
        x++;//not 0
    }
    if (n==i)//if i and n is same remainder is 0 so x+1 so to minus that added 1 x--.
    {
        x--;
    }
    }
    if(n==1)
    {
    printf ("Neither Prime nor Composition.");
    }

    if (x==0 && n!=1)//if n is divisible by any of the number from 2-9 except itself x is not 1 is then x is x++.
    {
        printf ("Prime.");
    }
    else if (n!=1)// 1 is not both
    {
         printf ("Composition.");
    }
    getch();
}
*/




