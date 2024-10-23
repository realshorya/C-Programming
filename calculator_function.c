#include <stdio.h>
int add(int a,int b)
{
    int p;
    p=a+b;
    return p;
}
int sub(int a,int b)
{
    int p;
    p=a-b;
    return p;
}
int multiply(int a,int b)
{
    int p;
    p=a*b;
    return p;
}
int division(int a,int b)
{
    int p;
    p=a/b;
    return p;
}
int main()
{
    int num1,num2,res,sol;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    printf("\nPress 1 for Addition\nPress 2 for Subtract\nPress 3 for Multiplication\nPress 4 for Divide\n");
    scanf("%d",&sol);
    switch(sol)
    {
    case 1:
        res=add(num1,num2);
        printf("Addition is :%d",res);
        break;
    case 2:
        res=sub(num1,num2);
        printf("Subtract is :%d",res);
        break;
    case 3:
        res=multiply(num1,num2);
        printf("Multiplication is :%d",res);
        break;
    case 4:
        res=division(num1,num2);
        printf("Dividsion is :%d",res);
        break;
    }    
}
