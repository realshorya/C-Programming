#include<stdio.h>
void show(int n, int m, int k)
{
    if(k==0)
    return;
    int s;
    s = n + m;
    printf("\n%d",s);
    show(m,s,k-1);
}
int main()
{
    int n;
    printf("Enter a number for fabonacci series:");
    scanf("%d",&n);
    show(0,1,n);
    return 0;
}
