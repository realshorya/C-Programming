#include<stdio.h>
void fact()
{
    int f=1,n,i;
    printf("\nEnter a number to find Factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\nFactorial is %d",f);
}
void table()
{
    int n,i,t;
    printf("\nEnter Table Number:");
    scanf("%d",&n);
    printf("\nTable of %d is",n);
    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("\n%d x %d = %d",n,i,t);
    }
}
void prime()
{
    int n,i,v=0;
    printf("\nEnter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            v++;
        }
    }
    if(v==2)
    {
        printf("\nEntered number is a prime number");
    }
    else
    {
        printf("\nEntered number is not a prime number");
    }
}
int main()
{
    int n;
    do
    {
        printf("\n-----------------------------");
        printf("\nMENU FOR SOME OPERATIONS");
        printf("\n-----------------------------");
        printf("\nPress - 1 to find factorial of a number");
        printf("\nPress - 2 to find table of N");
        printf("\nPress - 3 to find Number is Prime or not");
        printf("\nPress - 0 to Exit the Menu");
        printf("\nENTER YOUR OPTIONS : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            fact();
            break;

            case 2:
            table();
            break;

            case 3:
            prime();
            break;
        }
    } while (n!=0);
    printf("\nWe are GOING see you SOON");
    return 0;
}
