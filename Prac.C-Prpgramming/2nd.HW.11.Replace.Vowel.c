#include<stdio.h>
#include<conio.h>
void main()
{
    char line[100],i;
    printf ("TYPE alphabets ONLY:");
    gets(line);
    for (i=0;line[i]!='\0';i++)
    {
    if (line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u'
        || line[i]=='A' || line[i]=='B' || line[i]=='I' || line[i]=='O' || line[i]=='U')
    {
        line[i]='#';
    }
    }
    printf ("%s",line);
    getch();

}
