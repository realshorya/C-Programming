#include<stdio.h>
struct student
    {
        int admno;
        char name[20];
        int marks;
    };
    
int main()
{
    struct student a;
    int n;
    FILE *fp;
    do
    {    
    printf("\nMenu driven Input or Output program");
    printf("\nPress - 1 to Enter Student data");
    printf("\nPress - 2 to See Student Data");
    printf("\nPress - 3 to Exit the Menu");
    printf("\nEnter Your Choice:");
    scanf("%d",&n);
    if(n==1)
    {
        fp=fopen("student.dat","ab");
        printf("\nEnter student Admission number:");
        scanf("%d",&a.admno);
        fflush(stdin);
        printf("\nEnter Student Name:");
        scanf("%s",a.name);
        printf("\nEnter Student marks:");
        scanf("%d",&a.marks);
        fwrite(&a,sizeof(a),1,fp);
        printf("\nStudent Added");
        fclose(fp);
    }
    if(n==2)
    {
        FILE *fp;
        fp=fopen("student.dat","rb");
        if(fp==NULL)
        {
            printf("\nCannot find your file");
        }
        else{
            while(fread(&a,sizeof(a),1,fp));
            {
                printf("\nStudent %s Admission no. %d got marks %d",a.name,a.admno,a.marks);
            }
        }
        fclose(fp);
    }
    }
    while(n!=3);
    printf("\nGoodbye we will meet soon");
    return 0;
}
