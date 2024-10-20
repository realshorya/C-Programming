#include<stdio.h>
int main()
{
    int a,num,sum,d;
    printf("Enter a number:");
    scanf("%d",&a);
    num=a;
    while(num>0)
    {
      d=num%10;
      sum=sum*10+d;
      num=num/10;
    }
    printf("\nReverse of %d is %d",a,sum);
    return 0;
}
