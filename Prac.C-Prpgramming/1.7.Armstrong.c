
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()


/*
//3 digits number armstrong check
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;//3*remainder but if for digit it need 4*remainder
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    getch();
}
*/




/*
//for loop not running
{
    int numb,i,org,n=0,remain,result=0;
    printf ("Enter a number:");//input number
    scanf ("%d",&numb);
    org=numb;//original number is org
    for (i=0;numb!=0;i++)
    {
        numb=numb/10;
        n++;//For power how much iteration it take it has that much number and that is required power
    }
    numb=org;//here numb value becomes 0 after the above loop so gain store original value in numb.
    for(i=0;numb!=10;i++)
    {
        remain=numb%10;//for remainder
        result=result+pow(remain,n);//n to the power remainder + previous remain of loop
        numb=numb/10;//cofficient of inputed number (numb).
    }
    if(org==result)
    {
        printf ("Armstrong.");
    }
    else
    {
        printf ("Not Armstrong.");
    }
    getch();
}
*/


/*
//not
{
    int numb,i,org,remain,result=0;
    printf ("Enter a number:");//input number
    scanf ("%d",&numb);
    org=numb;//original number is org
    for (i=1;numb!=0;i++)
    {
        numb=numb/10;
    //For power how much iteration it take it has that much number and that is required power.
    }
    numb=org;//here numb value becomes 0 after the above loop so gain store original value in numb.
    for(i=1;numb!=10;i++)
    {
        remain=numb%10;//for remainder
        result=result+pow(remain,i);//i to the power remainder + previous remain of loop
        numb=numb/10;//cofficient of inputed number (numb).
    }
    if(org==result)
    {
        printf ("Armstrong.");
    }
    else
    {
        printf ("Not Armstrong.");
    }
    getch();
}
*/


/*//not mistake
//Do while loop
{
    int numb,org,i,remain,result=0;
    printf ("Enter a number:");
    scanf ("%d",&numb);

    org=numb;

    i=1;
    do{
        numb/=10;
        i++;
        }while(numb!=0);

    numb=org;

    do{
        remain=numb%10;
        result+=pow(remain,i);
        numb/=10;
        }while(numb!=0);

    if (result==org)
    {
        printf ("Armstrong.");
    }
    else
    {
        printf ("Not Armstrong.");
    }
    getch();
}
*/



{
    int number, originalNumber, remainder, result = 0, n = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &number);

     originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);

    getch();
}
