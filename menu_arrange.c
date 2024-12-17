#include<stdio.h>
int main()
{
    int n;
    int a[5];
    int i,j,temp;
    do
    {    
    printf("\nPress-1 to Arrange Array in Ascending Order");
    printf("\nPress-2 to Arrange Array in Descending Order");
    printf("\nPress-3 to exit the menu");
    printf("\nEnter Your Choice:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nEnter Any 5 Number in An Array");
        for(i=0;i<5;i++)
        {
            printf("\nEnter Number %d:",i+1);
            scanf("%d",&a[i]);
        }
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
        printf("\nArray in Ascending Order=");
        for(i=0;i<5;i++)
        {
                printf(" %d ",a[i]);
        }
        break;

        case 2:
        printf("\nEnter Any 5 Number in An Array");
        for(i=0;i<5;i++)
        {
            printf("\nEnter Number %d:",i+1);
            scanf("%d",&a[i]);
        }
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("\nArray in Descending Order=");
        for(i=0;i<5;i++)
        {
                printf(" %d ",a[i]);
        }
        break;
    }
    }while(n!=0);
    printf("\nWe Are Going...");
    return 0;
}
