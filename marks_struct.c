#include<stdio.h>
struct student
{
    int admno;
    char name[30];
    int marks;
};
int main()
{
    struct student a[5];
    int i;
    printf("\n---------------------------------------------");
    printf("\nEnter data mentioned below");
    printf("\n---------------------------------------------");
    for(i=0;i<5;i++)
    {
        printf("\nEnter Student %d data",i+1);
        printf("\nEnter Admission number:");
        scanf("%d",&a[i].admno);
        fflush(stdin);
        printf("\nEnter Name:");
        gets(a[i].name);
        printf("\nEnter marks:");
        scanf("%d",&a[i].marks);
    }
    printf("\n---------------------------------------------");
    printf("\nHere is your result");
    printf("\n---------------------------------------------");
    for(i=0;i<5;i++)
    {
        printf("\nStudent Admno %d name %s Marks %d",a[i].admno,a[i].name,a[i].marks);
    }
    return 0;
}
