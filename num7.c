//Code to find numbers 1 to 100 which have 7 as their last digit.
//This code is used in vscode.
#include <stdio.h>

int main()
{
    int n;
    for(n = 7; n <= 100; n+=10)
    {
        printf("\n%d",n);
    }

    return 0;
}
