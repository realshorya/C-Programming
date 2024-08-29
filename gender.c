//This code is use in vscode
#include<stdio.h>
int main()
{
    char gender;
    printf("\nEnter Your gender:");
    scanf("%c",&gender);

    if(gender == 'm'|| gender =='M')
    {
        printf("\nYou Are Male");
    }

    else if(gender == 'f' || gender == 'F')
    {
        printf("\nYou Are Female");
    }

    else 
    {
        printf("\nInvailed Input");
    }
    return 0;
}
