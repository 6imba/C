#include<stdio.h>
#include<conio.h>
void main()
{
/*
    int array[3][6] = { {11,12,13,14,15,16} , {21,22,23,24,25,26} , {31,32,33,34,35,36} };

    printf ("The Given 3*6 Matrix is:\n");
    printf ("%d\t",array[0][0]);//First row First colum
    printf ("%d\t",array[0][1]);//First row Second colum
    printf ("%d\t",array[0][2]);//First row Third colum
    printf ("%d\t",array[0][3]);
    printf ("%d\t",array[0][4]);
    printf ("%d\n",array[0][5]);

    printf ("%d\t",array[1][0]);//Second row First colum
    printf ("%d\t",array[1][1]);//Second row Second colum
    printf ("%d\t",array[1][2]);//Second row Third colum
    printf ("%d\t",array[1][3]);
    printf ("%d\t",array[1][4]);
    printf ("%d\n",array[1][5]);

    printf ("%d\t",array[2][0]);//Third row First colum
    printf ("%d\t",array[2][1]);//Third row Second colum
    printf ("%d\t",array[2][2]);//Third row Third colum
    printf ("%d\t",array[2][3]);//Third row Fourth colum
    printf ("%d\t",array[2][4]);
    printf ("%d\n",array[2][5]);

        printf ("END");
*/

/*
//WAP to read element and print them in matrix form:

    int a[2][3],i,k;
    printf ("Enter numbers:");
    for(i=0;i<2;i++)
    {
    for(k=0;k<3;k++)
      {
    scanf("%d",&a[i][k]);
      }
    }

    printf ("Given Element in Matrix form:\n");

    for(i=0;i<2;i++)
    {
    for(k=0;k<3;k++)
      {
          if(i==0 && k==2)
            {
            printf("%d\n",a[i][k]);
            }
            else
            {
            printf("%d\t",a[i][k]);
            }
      }
    }
*/



    int a[3][3],i,k,sum=0;
    printf ("Enter numbers:");
    for(i=0;i<3;i++)
    {
    for(k=0;k<3;k++)
      {
    scanf("%d",&a[i][k]);
      }
    }

    printf ("Given Element in Matrix form:\n");

    for(i=0;i<3;i++)
    {
    for(k=0;k<3;k++)
      {
          if(i==0 && k==2 || i==1 && k==2)
            {
            printf("%d\n",a[i][k]);
            }
            else
            {
            printf("%d\t",a[i][k]);
            }
      }
    }

    for(i=0;i<3;i++)
    {
    for(k=0;k<3;k++)
      {
    sum=sum + a[i][k];
      }
    }
    printf ("\nSUM of all element of Above matrix is %d.",sum);


getch();
}
