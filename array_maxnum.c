#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *a;
   int i,n,max;
   printf("\nEnter Size of An Array:");
   scanf("%d",&n);
   a=(int*)malloc(sizeof(a)*n);
   printf("\nEnter Values");
   for(i=0;i<n;i++)
   {
      printf("\nEnter Number %d:",i+1);
      scanf("%d",&a[i]);
   }
   max=a[0];
   for(i=0;i<n;i++)
   {
      if(a[i]>max)
      {
         max=a[i];
      }
   }
   printf("\nMAximum Value is : %d",max);
   return 0;
}
