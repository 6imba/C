#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j,n;
int sum=0;
int max,min;
float avg;
int age[100];
printf("Enter the number of people ");
scanf ("%d",&n);
printf("Enter the age of peoples: ");
for (i=0;i<n;i++)
scanf ("%d",&age[i]);
max = age[0];
min = age[0];
for (j=0;j<n;j++)
{
if(age[j]>max)
max = age[j];
if (age[j]<min)
min = age[j];
sum=sum+age[j];
}
avg=sum/n;
printf("the max is %d\n",max);
printf ("The min is %d\n",min);
printf("The average value of age is %f",avg);
getch ();
}
