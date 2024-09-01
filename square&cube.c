//Code to find Square and Cube roots.
//This code is use in vscode.
#include <stdio.h>

int main() 
{
    int n,p,r;
    
    for(n = 1; n <= 5; n++)
    {
        p=n*n;
        r=n*n*n;
        printf("\n%d\t%d\t%d",n,p,r);
    }
    return 0;
}
