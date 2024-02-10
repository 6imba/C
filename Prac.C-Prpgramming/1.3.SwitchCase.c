#include<stdio.h>
#include<conio.h>
void main()


{
    int a,b,x,sum,sub,mul,div;
    printf ("Enter 2 numbers:");
    scanf ("%d%d",&a,&b);
    printf ("Choose a number:\n1. for addition.\n2. for subtraction.\n3. for multiplication.\n4. for division.\n");
    scanf ("%d",&x);
    switch(x)
    {
    case 1:
        sum=a+b;
        printf ("%d",sum);
        break;
    case 2:
        sub=a-b;
        printf ("%d",sub);
        break;
    case 3:
        mul=a*b;
        printf ("%d",mul);
        break;
    case 4:
        div=a/b;
        printf ("%d",div);
        break;
    default :
        printf ("Invalid.");
        break;
    }
    getch();
}
*/

/*
{
    int x;
    printf ("Enter the number for color selection:\n1.for red.\n2. for green.\n3. for blue.\n4. for yellow.\n");
    scanf ("%d",&x);
    switch(x)
    {
    case 1:
    printf ("Red.");
    break;
    case 2:
    printf ("Green.");
    break;
    case 3:
    printf ("Blue.");
    break;
    case 4:
    printf ("Yellow.");
    break;
    default:
    printf ("Invalid!!!");
    break;
    }
}
*/

/*
//not
{
    char name[15];
    printf ("Enter a place name:");
    scanf ("%s",&name);
    switch(name)
    {
        case "Dhading":
            printf ("32 km.");
            break;
        case "Muglin":
            printf ("100 km.");
            break;
        case "Pokhara":
            printf ("200 km.");
            break;
        case "Damak":
            printf ("565 km.");
            break;
        case "Sauraha":
            printf ("210 km.");
            break;
        default:
            printf ("Invalid");
            break;
    }
    getch();
}
*/

