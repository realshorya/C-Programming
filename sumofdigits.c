//This code is used in vs code
//To find sum of digits of a number
#include<stdio.h>
int main()
{
    int num,d,sum=0;
    printf("\nEnter a number:");
    scanf("%d",&num);

    while(num!=0)
    {
        d=num%10;
        sum+=d;
        num=num/10;
    }
    printf("\nSum of digits is %d",d);
    return 0;
}
