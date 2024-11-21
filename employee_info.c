#include<stdio.h>
struct employee
{
    int id;
    char name[30];
    int age;
    int adr[50];
    char depart[15];
    int salary;
};
int main()
{
    struct employee a[10];
    int i;
    printf("\n-----------------------------------------");
    printf("\nENTER DATA GIVEN BELOW ONY BY ONE");
    printf("\n-----------------------------------------");
    for(i=0;i<10;i++)
    {
        printf("\nDo Employee %d Entry\n",i+1);
        printf("\nEnter Employee ID:");
        scanf("%d",&a[i].id);
        fflush(stdin);
        printf("\nEnter Employee Name:");
        gets(a[i].name);
        printf("\nEnter Employee Age:");
        scanf("%d",&a[i].age);
        fflush(stdin);
        printf("\nEnter Employee Address:");
        gets(a[i].adr);
        fflush(stdin);
        printf("\nEnter Employee Department:");
        gets(a[i].depart);
        printf("\nEnter Employee Salary:");
        scanf("%d",&a[i].salary);
    }
    printf("\n---------------------------------------------------------------------");
    printf("\nAdmno  Name           Age    Address        Department   Salary");
    printf("\n---------------------------------------------------------------------");
    for(i=0;i<10;i++)
    {
        printf("\n%-6d %-15s %-5d %-15s %-11s %-5d",a[i].id,a[i].name,a[i].age,a[i].adr,a[i].depart,a[i].salary);
    }
    return 0;

}
