#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int i,n,sum=0;
    printf("How many number you want to enter:");
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(a+i));
        sum += *(a+i);
    }
    printf("\nSum is : %d ",sum);
    return 0;
}
