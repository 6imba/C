#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()

//puts & gets
/*
{
    char sent[100];
    printf ("Enter the sentences:");
    gets (sent);// takes space also and take 1 enter until first word.
    //scanf ("%s",&sent);//not take space and takes enter until first word.
    printf ("Printed:%s",sent);
    getch();
}
*/


/*
{
    char name[25] ;
    printf ("Enter your full name ") ;
    gets (name) ;
    puts ("Hello!") ;
    puts (name) ;
    getch();
}
*/


/*
{   //reverse
    char sent[20];
    puts ("Enter the sentences:");
    gets(sent);
    strrev(sent);
    puts (sent);
    getch();
}
*/

/*
{   //length
    char name[20],l;
    puts ("Enter a name:");
    gets(name);
    l=strlen(name);
    printf ("The length of above sentences is %d.",l);
    getch();
}
*/

/*
{
 //COPY
    char a[20],l[20];
    puts ("Enter a name:");
    gets(a);
    strcpy(l,a);
    printf ("The character of n is copied to l which is %s.",l);
    getch();
}
*/

/*
{
 //All capital
    char a[20];
    puts ("Enter a name:");
    gets(a);
    strupr(a);
    printf ("The inputed string is %s.",a);
    getch();
}
*/

/*
{
 //All small
    char a[20];
    puts ("Enter a name:");
    gets(a);
    strlwr(a);
    printf ("The inputed string is %s.",a);
    getch();
}
*/

/*
{
 //Join TWO string
    char a[20],b[20];
    puts ("Enter a name:");
    gets(a);
    puts ("Enter a name:");
    gets(b);
    printf ("The inputed string is %s.",strcat(a,b));//if to put gap between two given string hit space.
    getch();
}
*/


/*
{
 //Compare TWO string
    char a[20],b[20];
    puts ("Enter a name:");
    gets(a);
    puts ("Enter a name:");
    gets(b);
    if (strcmp(a,b)==0)//a[20]==b[20] wrong
    printf ("The inputed both name are same.");
    else
    printf ("The inputed both name are different.");
    getch();
}
*/


/*
{   //Palindrome & compare & copy & reverse
    char name[20],org[20];
    puts ("Enter a name:");
    gets(name);
    strcpy(org,name);//copy
    strrev(org);//OR strrev(name);
    if (strcmp(org,name)==0)//compare
    {
    printf ("The word is pallindrome.");
    }
    else
    {
     printf ("The word is not pallindrome.");
    }
    getch();
}
*/


