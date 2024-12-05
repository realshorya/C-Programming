#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int n,i;
    printf("\nEnter How Many Numbers You Want To Enter:");
    scanf("%d",&n);
    a = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nHere Is Your Data: %d",a[i]);
    }
    printf("\nThank You!!");
    return 0;
}
