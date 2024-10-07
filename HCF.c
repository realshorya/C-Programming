//This code is used in vs code
//To find HCF of a number
#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("\nEnter number for HCF:");
    scanf("%d %d",&a,&b);

    while(a%b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("\nHCF is %d",b);
    return 0;
}
