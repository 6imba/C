#include<stdio.h>
#include<conio.h>
void main()
{
    char line[100],i,x=0;
    puts("TYPE sentences:");
    gets(line);
    for(i=0;line[i]!='\0';i++)
    {
        if (line[i]=='a' || line[i]=='A')
        {
            x++;
        }
    }
    printf ("%d",x);
    getch();
}
