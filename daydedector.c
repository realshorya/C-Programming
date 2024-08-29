//This code is use in vscode
#include<stdio.h>
int main()
{
    int day;
    printf("\nEnter day Number:");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("\nMonday");
        break;

        case 2:
        printf("\nTuesday");
        break;

        case 3:
        printf("\nWednesday");
        break;

        case 4:
        printf("\nThursday");
        break;

        case 5:
        printf("\nFriday");
        break;

        case 6:
        printf("\nSaturday");
        break;

        case 7:
        printf("\nSunday");
        break;

        default:
        printf("\nInvailed Day Number");
    }
    return 0;
}
