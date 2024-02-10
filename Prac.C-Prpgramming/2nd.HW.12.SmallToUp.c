#include<stdio.h>
#include<conio.h>
void main()

{
    char line[100],i;
    printf ("TYPE alphabets ONLY:");
    gets(line);
    for (i=0;line[i]!='\0';i++)
    {
    if ( line[i]>='a' && line[i]<='z' )
    {
        line[i]=line[i]-32;
    }
    else if( line[i]>='A' && line[i]<='Z' )
    {
        line[i]=line[i]+32;
    }
    }
    printf ("%s",line);
    getch();

}


/*
//ASK SIR
{
    char line[100],i;
    printf ("TYPE alphabets ONLY:");
    gets(line);
    for (i=0;line[i]!='\0';i++)
    {
    if ( line[i]>='a' && line[i]<='z' )
    {
        printf ("%s",strupr(line[i]));
    }
    else if( line[i]>='A' && line[i]<='Z' )
    {
        printf ("%s",strlwr(line[i]));
    }
    }
    getch();

}
*/
