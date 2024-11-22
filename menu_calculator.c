#include<stdio.h>
int main()
{
    int a,b,c,n;
    do
    {
        printf("\n--------------------------------");
        printf("\nARITHMETIC CALCULATOR MENU>>");
        printf("\n--------------------------------");
        printf("\nPress - 1 To Add Numbers");
        printf("\nPress - 2 To Subtract Numbers");
        printf("\nPress - 3 To Multiply Numbers");
        printf("\nPress - 4 To Divide Numbers");
        printf("\nPress - 0 To Exit The Menu");
        printf("\nEnter Your Choice:");
        scanf("%d",&n);
      
        switch(n)
        {
            case 1:
               printf("\nEnter Two Numbers:");
               scanf("%d%d",&a,&b);
               c=a+b;
               printf("\n<--------------------------------------->");
               printf("\n   ||Addition of two numbers is this %d||",c);
               printf("\n<--------------------------------------->");
               break;
            case 2:
               printf("\nEnter Two Numbers:");
               scanf("%d%d",&a,&b);
               c=a-b;
               printf("\n<--------------------------------------->");
               printf("\n   ||Subtract of two numbers is this %d||",c);
               printf("\n<--------------------------------------->");
               break;
            case 3:
               printf("\nEnter Two Numbers:");
               scanf("%d%d",&a,&b);
               c=a*b;
               printf("\n<--------------------------------------->");
               printf("\n   ||Multiply of two numbers is this %d||",c);
               printf("\n<--------------------------------------->");
               break;
            case 4:
                printf("\nEnter Two Numbers:");
                scanf("%d%d",&a,&b);
                float c;
                c=a/(float)b;
                printf("\n<--------------------------------------->");
                printf("\n   ||Divide of two numbers is this %.2f||",c);
                printf("\n<--------------------------------------->");
               break;   
        }       
    }while(n!=0);
    printf("\nBYE WE ARE GOING...");
    return 0;
}
