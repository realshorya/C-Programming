//This code is use in vscode
#include<stdio.h>
int main()
{
    float radius,area,cir;
    int choice;
    printf("\nEnter radius:");
    scanf("%f",&radius);

    printf("\nPress 1 For Area of Circle ");
    printf("\nPress 2 For Circumference of Circle ");
    printf("\nEnter Your choice");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
          area=3.14*radius*radius;
          printf("\nHere Is Your Area %f",area);
          break;
        
        case 2:
          cir=2*3.14*radius;
          printf("\nHere Is Your Circumference %f",cir);
          break;
        default:
          printf("\nInvailed Option Selected");
    }
    return 0;
}
