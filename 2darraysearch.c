#include<stdio.h>
int main()
{
    int a[6][6],r,c,i,j,search;
    printf("How Many Rows And Columns Are There:");
    scanf("%d %d",&r,&c);
    printf("\nEnter Matrix Element:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered Matrix is:");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nWhat Number You Want To Search:");
    scanf("%d",&search);
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            if(a[i][j]==search)
            {
                printf("\n%d is found at a[%d][%d] Position",search,i,j);
                break;
            }
        }
    }
    printf("\nNumber not found");
    return 0;
}
