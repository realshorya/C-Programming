#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("\nHow many numbers are there:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("\t");
        }
        for(k=1;k<=i*2-1;k++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
