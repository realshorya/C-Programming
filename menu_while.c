#include<stdio.h>
void HCF()
{
    int a,b,rem;
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    while(a%b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("\nHCF of Two number is : %d",b);
}
void sumof()
{
    int d,n,sum=0,num;
    printf("\nEnter a Number to get sum of number:");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        d=num%10;
        sum+=d;
        num=num/10;
    }
    printf("\nSum of a Number %d is %d",n,sum);
}
void reverse()
{
    int num,n,sum=0,d;
    printf("\nEnter Number to reverse:");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        d=num%10;
        sum=sum*10+d;
        num=num/10;
    }
    printf("\nReverse of Number %d is %d",n,sum);
    if(n==sum)
    {
        printf("\nEntered number is Palindrome");
    }
    else
    {
        printf("\nEntered number is not Palindrome");
    }
}
void armstrong()
{
    int n,num,d,sum=0;
    printf("\nEnter a number:");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        d=num%10;
        sum=sum+d*d*d;
        num=num/10;
    }
    if(n==sum)
    {
        printf("\nEntered number is Armstrong number");
    }
    else
    {
        printf("\nEntered number is not Armstrong");
    }
}
int main()
{
    int n;
    do
    {
    printf("\n------------------------------");    
    printf("\nMENU FOR SOME OPERATIONS");
    printf("\n------------------------------");
    printf("\nPress - 1 to find HCF");
    printf("\nPress - 2 to find Sum of Numbers");
    printf("\nPress - 3 to find Reverse of number and palindrome or not");
    printf("\nPress - 4 to check number is Armstrong or not");
    printf("\nPress - 0 to Exit the MENU");
    printf("\nENER YOUR CHOICE:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
         HCF();
         break;

        case 2:
         sumof();
         break;

        case 3:
         reverse();
         break;

        case 4:
         armstrong();
         break;
    }
    } while (n!=0);
    printf("\nGOOD BYE WE WILL MEET SOON...");
    return 0;
}
