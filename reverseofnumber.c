//This code is used in vs code
//To find reverse of number
#include<stdio.h>
int main()
{
    int num,d,sum=0;
    printf("\nEnter a number:");
    scanf("%d",&num);

    while(num!=0)
    {
        d=num%10;
        sum=sum*10+d;
        num=num/10;
    }
    printf("\nReverse is %d",sum);
    return 0;
}
