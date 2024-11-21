
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[15],b[15];
    printf("Enter a String :");
    gets(a);
    printf("\nEntered String is :%s",a);
    strcpy(b,a);
    strrev(b);
    printf("\nRevered string is :%s",b);
    n=strcmp(a,b);
    if(n==0)
    {
        printf("\nString %s is palindrome",a);
    }
    else
    {
        printf("\nString %s is not palindrome",a);
    }
    return 0;
}
