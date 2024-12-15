#include<stdio.h>
int main()
{
    int procde[10];
    int cost[50];
    int qty[5];
    int i,n,amount=0,total=0,netamount=0,discount,discamt;
    printf("\nHow Many Product Are There:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter product %d Details",i+1);
        printf("\nEnter Product Code:");
        scanf("%d",&procde[i]);
        printf("\nEnter Product Cost:");
        scanf("%d",&cost[i]);
        printf("\nEnter Product Quantity:");
        scanf("%d",&qty[i]);
    }
    printf("\nProduct added successfully.....");
    printf("\n---------------------------------------");
    printf("\nProcode     Cost     Quantity   Amount");
    printf("\n---------------------------------------");
    for(i=0;i<n;i++)
    {
        amount=cost[i]*qty[i];
        printf("\n%d\t    %d\t     %d\t        %d\t",procde[i],cost[i],qty[i],amount);
        total+=amount;
    }
    printf("\n---------------------------------------");
    printf("\nTotal cost is: %d",total);
    printf("\nDiscount :");
    scanf("%d",&discount);
    discamt=total*discount/100;
    netamount=total-discamt;
    printf("\nNet Amount is: %d",netamount);

    return 0;
}
