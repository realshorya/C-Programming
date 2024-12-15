#include<stdio.h>
int main()
{
    int a[10]={2,5,8,19,24,31,47,73,89,95};
    int i,beg=0,end=9,mid,n;
    printf("\nWhich Number You Want To Search:");
    scanf("%d",&n);
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==n)
        {
            printf("\nNumber Found in Array at Posiion %d",mid+1);
            break;
        }
        else if(a[mid]>n)
        {
            end=mid-1;
        }
        else if(a[mid]<n)
        {
            beg=mid+1;
        }
    }
    if(a[mid]!=n)
    {
        printf("\nNumber not Found");
    }
    return 0;
}
