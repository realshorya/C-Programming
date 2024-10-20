#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("how many numbers rows for pattern:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\n");
        for(j=0;j<i;j++)
        {
            count++;
            printf("%d\t",count);
        }
    }
    return 0;
}    
