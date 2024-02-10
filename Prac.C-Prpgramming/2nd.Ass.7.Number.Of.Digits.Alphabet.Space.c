#include<stdio.h>
#include<conio.h>
void main()
{
    char line[100],i,x=0,y=0,z=0;
    printf ("TYPE here:");
    gets(line);
    for (i=0;line[i]!='\0';i++)
    {
    if (line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='B')
    {
        x++;
    }
    else if(line[i]>='0' && line[i]<='9')
    {
        y++;
    }
    else if(line[i]=' ')
    {
        z++;
    }
    }
    printf ("Alphabets=%d",x);
    printf ("\nDigits=%d",y);
    printf ("\nSpace=%d",z);
    getch();

}
