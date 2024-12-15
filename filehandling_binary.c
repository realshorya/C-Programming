#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int admno;
    char name[10];
    int marks;
}stu;

int main()
{
    int n;
    stu a;
    FILE *fp;
    printf("\nPress-1 to Enter student data");
    printf("\nPress-2 to read data of student");
    printf("\nPress-3 to Go to nth Position");
    printf("\nPress-4 to use ftell Function");
    printf("\nPress-5 to use rewind Function");
    printf("\nEnter your choice:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        fp=fopen("Student.dat","ab");
        if(fp==NULL)
        {
            printf("\nFile Not Exist");
        }
        else{
        printf("\nEnter Admission Number:");
        scanf("%d",&a.admno);
        printf("\nEnter Student name:");
        fflush(stdin);
        gets(a.name);
        printf("\nEnter Student Marks:");
        scanf("%d",&a.marks);
        fwrite(&a,sizeof(a),1,fp);
        printf("\nStudent Added Successfully");
        }
        fclose(fp);
        break;

        case 2:
        fp=fopen("Student.dat","rb");
        if(fp==NULL)
        {
            printf("\nFile Not Exist");
        }
        else
        {
            while(fread(&a,sizeof(a),1,fp))
            {
                printf("\nAdmission no. %d Student name: %s Marks: %d",a.admno,a.name,a.marks);
            }
        }
        fclose(fp);
        break;

        case 3:
        fp=fopen("Student.dat","rb");
        printf("\nEnter Where You Want to Go:");
        scanf("%d",&n);
        fseek(fp,sizeof(a)*(n-1),0);
        fread(&a,sizeof(a),1,fp);
        printf("\nYour Record is");
        printf("\nAdmission no. %d Student name: %s Marks: %d",a.admno,a.name,a.marks);
        fclose(fp);
        break;

        case 4:
        fp=fopen("Student.dat","rb");
        n=ftell(fp);
        printf("\nFile Pointer is at location %d",n);
        fclose(fp);
        break;

        case 5:
        fp=fopen("Student.dat","rb");
        fseek(fp,sizeof(a)*3,0);
        printf("\nFile Pointer is at location %d",ftell(fp));
        rewind(fp);
        printf("\nFile Pointer is at location %d",ftell(fp));
        fclose(fp);
        break;
    }
    return 0;
}
