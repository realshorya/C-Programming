#include<stdio.h>
int sumof(int n)
{
    if(n==0)
    return 0;
    int s;
    s=n%10+sumof(n/10);
    return s;
}
int main()
{
    int n,res;
    printf("Enter your number :");
    scanf("%d",&n);
    res=sumof(n);
    printf("\nReverse of %d is %d",n,res);
    return 0;
}
