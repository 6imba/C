/*
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char line[100],i,x=0,z=0;
    printf ("TYPE alphabets ONLY:");
    gets(line);
    strlwr(line);
    for (i=0;line[i]!='\0';i++)
    {
    if (line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u')
    {
        x++;
    }
    else
    {
        z++;
    }
    }
    printf ("VOWEL=%d",x);
    printf ("\nCONSONENT=%d",z);
    getch();

}
*/


//OR

/*
#include<stdio.h>
#include<conio.h>
void main()
{
    char line[100],i,x=0,z=0;
    printf ("TYPE alphabets ONLY:");
    gets(line);
    for (i=0;line[i]!='\0';i++)
    {
    if (line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u'
        || line[i]=='A' || line[i]=='B' || line[i]=='I' || line[i]=='O' || line[i]=='U')
    {
        x++;
    }
    else
    {
        z++;
    }
    }
    printf ("VOWEL=%d",x);
    printf ("\nCONSONENT=%d",z);
    getch();

}
*/

//both of the above takes space and other symbol also

#include<stdio.h>
#include<conio.h>
void main()
{
    char line[100],i,x=0,z=0;
    printf ("TYPE alphabets ONLY:");
    gets(line);
    for (i=0;line[i]!='\0';i++)
    {
    if (line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u'
        || line[i]=='A' || line[i]=='B' || line[i]=='I' || line[i]=='O' || line[i]=='U')
    {
        x++;
    }
    else if (line[i]>='a' || line[i]<='z' || line[i]>='A' || line[i]<='Z')
    {
        z++;
    }
    }
    printf ("VOWEL=%d",x);
    printf ("\nCONSONENT=%d",z);
    getch();

}


