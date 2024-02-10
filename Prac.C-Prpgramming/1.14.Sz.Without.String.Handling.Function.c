#include<stdio.h>
#include<conio.h>
void main()

/*
//NO.s of strings
{
    char word[10];
    int i,x=0;
    printf ("Enter a word:");
    scanf ("%s",&word);
    for(i=0;word[i]!='\0';i++)
    {
    x=x+1;
    }
    printf ("The number of string is %d.",x);
    getch();
}
*/

/*
//NO.s of strings
{
    char word[10];
    int i;
    printf ("Enter a word:");
    gets (word);
    for(i=0;word[i]!='\0';i++);
    printf ("The number of string is %d.",i);
    getch();
}
*/

/*
{
char name[10]="amir";//or char name[10]="am12ir"; output=6
int i,x=0;
for (i=0;name[i]!='\0';i++)
{
x=x+1;
}
printf ("The number of character is %d.",x);
getch();
}
*/


/*
//NO.s of Vowel & Consonant
{
    char word[150];
    int i, vowels=0, consonants=0;
    printf("Write the sentences: ");
    scanf("%[^\n]", word);

    for(i=0; word[i]!='\0'; ++i)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
           word[i]=='o' || word[i]=='u' || word[i]=='A' ||
           word[i]=='E' || word[i]=='I' || word[i]=='O' ||
           word[i]=='U')
        {
            ++vowels;
        }
        else if((word[i]>='a'&& word[i]<='z') || (word[i]>='A'&& word[i]<='Z'))
        {
            ++consonants;
        }
    }

    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    getch();
}
*/

/*
//reverse inputed string
{
    char word[20];
    int i, string=0;
    printf("Write the sentences: ");
    gets(word);
    for(i=0; word[i]!='\0';i++)
    {
    string++;
    }
    for(i=string;i>=0;i--)
    {
       printf ("%c",word[i]);
    }
   getch();
}
*/

/*
//replace vowel by*

{
    char word[20];
    int i, string=0;
    printf("Write the sentences: ");
    scanf ("%[^\n]s",word) ;
    for(i=0; word[i]!='\0';i++)
    {
    string++;
    }
    printf ("%d",string);
    for(i=0;i<string;i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
           word[i]=='o' || word[i]=='u' || word[i]=='A' ||
           word[i]=='E' || word[i]=='I' || word[i]=='O' ||
           word[i]=='U')
       {
           word[i]="**";
           printf ("%s",word[i]);
       }
       else
       {
           printf ("%d",word[i]);
       }
    }
   getch();
}
*/
