//This code is use in vscode
#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total,percentage;
    printf("Enter First Subject Marks:");
    scanf("%d",&m1);

    printf("Enter Second Subject Marks:");
    scanf("%d",&m2);

    printf("Enter Third Subject Marks:");
    scanf("%d",&m3);

    printf("Enter Fourth Subject Marks:");
    scanf("%d",&m4);

    printf("Enter Fifth Subject Marks:");
    scanf("%d",&m5);

    total=m1+m2+m3+m4+m5;
    percentage= total/5;
    printf("Total is %d and Percentage is %d",total,percentage);
    return 0;
}7
