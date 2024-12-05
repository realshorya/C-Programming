#include<stdio.h>
struct product
{
    char name[20];
    int admno;
    int marks;
};
int input(struct product *x)
{

    printf("\nEnter Name of Student:");
    fflush(stdin);
    gets(x->name);
    printf("\nEnter Admission Number:");
    scanf("%d",&x->admno);
    printf("\nEnter Student marks:");
    scanf("%d",&x->marks);

}
int main()
{
    int i;
    struct product a[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter Data of Student %d",i+1);
        input(&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nStudent Name:%s of Admission number:%d Got:%d Marks.",a[i].name,a[i].admno,a[i].marks);
    }
    return 0;
}
