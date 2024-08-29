//this program is usable in vscode
#include<stdio.h>

int main()
{
    int per;
    printf("\nEnter your percentage: ");
    scanf("%d",&per);

    if(per < 33)
    {
        printf("\nOOPS You Can't Go Retry With Kick Start");
    }

    if(per >= 33 && per < 100)
    {
        printf("\nYou Are Passed Best Of Luck");
    }

    if(per >= 101)
    {
        printf("\nPlease Re-Enter Your Number");
    }

    return 0;
}
