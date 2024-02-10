#include<stdio.h>
#include<conio.h>
void main()


/*
{
    char line[100];
    puts("TYPE sentence:");
    gets(line);
    puts(strrev(line));
    getch();
}
*/

/*
{
    char line[4];
    puts ("TYPE name:");
    gets(line);
    puts (line);
}
*/

/*
{
    char line[4];
    printf ("TYPE line:");
    scanf ("%s",&line);
    printf ("%s",line);
}
*/


{
    char line[10];
    int i,string=0;
    printf ("TYPE line:");
    scanf ("%s",&line);
    for(i=0;line[i]!='\0';i++)
        {
            string=string+1;
        }
    printf ("%d\n",string);
    for(i=string;i>=0;i--)
    {
        printf ("%c",line[i]);
    }
    getch();
}


