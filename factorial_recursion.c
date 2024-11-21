#include<stdio.h>
int fact(int x)
{
    if(x==1)
    return 1;
    int f;
    f=x*fact(x-1);
    return f;
}
int main()
{
    int n,res;
    printf("Enter a number to find Factorial:");
    scanf("%d",&n);
    res=fact(5);
    printf("\nFactorial of number %d is %d",n,res);
    return 0;
}
