#include<stdio.h>
typedef struct product
{
    char name[10];
    int qty;
    int cost;
}prod;
void input(prod *x)
{
    printf("\nEnter Product Name:");
    fflush(stdin);
    gets(x->name);
    printf("\nEnter Product quantity:");
    scanf("%d",&x->qty);
    printf("\nEnter Product Amount:");
    scanf("%d",&x->cost);
}
void show(prod x)
{
    printf("\nProduct Name:%s",x.name);
    printf("\nQuantity:%d",x.qty);
    printf("\nCost is:%d",x.cost);
    printf("\nTotal Amount:%d",x.qty*x.cost);
}
int main()
{
    int i;
    prod a[5];
    printf("\n----------------------------");
    printf("\nSHORYA GENERAL STORE BILL");
    printf("\n----------------------------");
    for(i=0;i<5;i++)
    {
        input(&a[i]);
    }
    printf("\n--------------------------");
    printf("\nHERE IS YOUR BILL");
    printf("\n--------------------------");
    for(i=0;i<5;i++)
    {
        printf("\n------------------");
        printf("\nProduct:%d",i+1);
        printf("\n------------------");
        show(a[i]);
    }
    printf("\n----------------------------");
    printf("\nTHANK YOU FOR SHOPPING");
    printf("\n----------------------------");
    return 0;
}
