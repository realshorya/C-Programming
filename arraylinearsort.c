#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int mid,n,i,b,found=0;
    printf("\nHow Many Numbers Are there:");
    scanf("%d",&b);
    a=(int*)malloc(sizeof(a)*b);
    for(i=0;i<b;i++)
    {
        printf("\nEnter number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter number you want to search in:");
    scanf("%d",&n);
    for(i=0;i<b;i++)
    {
        if(a[i]==n)
        {
            printf("\nEntered Number is %d Found at %d",a[i],i+1);
            found++;
        }
    }
    if(found==0)
    {
        printf("\nEntered Number Not Found");
    }
    return 0;
}
