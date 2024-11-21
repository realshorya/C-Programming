#include<stdio.h>
int main()
{
    char a[20];
    int i,n,v=0;
    printf("Enter a string : ");
    gets(a);
    printf("\nEntered String is : %s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
           {
              a[i]+=32;
           }
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
           {
              v++;
           } 
        n++;
    }
    printf("\nCharacter entered is %d",n);
    printf("\nVowel is : %d",v);
}
