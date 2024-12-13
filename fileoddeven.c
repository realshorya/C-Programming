#include<stdio.h>
int main()
{
    int i,num;
    FILE *fp,*fq;
    fp=fopen("odd.txt","w");
    fq=fopen("even.txt","w");
    printf("Enter 20 Numbers for file");
    for(i=1;i<=20;i++)
    {
        printf("\nEnter Number %d:",i);
        scanf("%d",&num);
        if(num%2==0)
        {
            fprintf(fp,"\n%d",num);
        }
        else
        {
            fprintf(fq,"\n%d",num);
        }
    }
    fclose(fp);
    fclose(fq);
    return 0;
}
