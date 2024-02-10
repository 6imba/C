#include<stdio.h>
#include<conio.h>
void main()
{
    char line[100],i,x=1;//x=0
    puts("TYPE sentences:");
    gets(line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]==' ')
        {
            x++;
        }
    }
    printf ("Numbers of words : %d.",x);//printf ("Numbers of words : %d.",x+1);
    getch();
}
