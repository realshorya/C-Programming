#include<stdio.h>
int main()
{
    int a[5];
    int i,max,temp,j;
    printf("\nEnter 5 Array Element:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered Array Are:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    max=0;
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nSorted Array Are:");
    temp=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
        
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nMaximum Number is %d",max);
    return 0;
}
