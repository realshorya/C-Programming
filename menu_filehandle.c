#include<stdio.h>
void write ()
{
    int n,i;
    char ch;
    char name[50];
    FILE *fp;
    fp=fopen("shorya.txt","w");
    printf("How many lines you want to print:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a String %d :",i+1);
        fflush(stdin);
        gets(name);
        fprintf(fp,"\n%s",name);
    }
    fclose(fp);
}
void read()
{
    char ch;
    FILE *fp;
    fp=fopen("shorya.txt","r");
    if(fp==NULL)
    {
        printf("\nThere is no file to read text..)");
    }
    else{
        do
        {
            ch=fgetc(fp);
            printf("%c",ch);
        } while (ch!=EOF);
        
    }
    fclose(fp);
}
void append()
{
    int n,i;
    char ch;
    char name[50];
    FILE *fp;
    fp=fopen("shorya.txt","a");
    printf("How many lines you want to print More:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter a String %d :",i+1);
        fflush(stdin);
        gets(name);
        fprintf(fp,"\n%s",name);
    }
    fclose(fp);
}
int main()
{
    int n;
    do
    {
        printf("\nPress-1 to Write in txt file");
        printf("\nPress-2 to Append in Existing txt file");
        printf("\nPress-3 to Read from Existing txt file");
        printf("\npress-0 to Exit");
        printf("\nEnter Your Choise:");
        scanf("%d",&n);
        switch(n)
    {
        case 1:
        write();
        break;

        case 2:
        append();
        break;

        case 3:
        read();
        break;
    }
    } while (n!=0);
    printf("\nThank you for coming, We are going..");
    return 0;
}
