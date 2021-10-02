#include<stdio.h>
int main ()
{
    int a[10][10],m,n,i,j,k;
    printf("Enter the rows and columns of a matrix\n");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Enter the elements one by one\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
   printf("\n");
    m++;
    n++;
     for(i=0;i<m-1;i++)
     {
         j=n-1;
         a[i][j]=0;
         for (k=0;k<n-1;k++)
         {
             a[i][j]= a[i][j]+a[i][k];
         }
     }

     for(j=0;j<n-1;j++)
     {
         i=m-1;
         a[i][j]=0;
         for(k=0;k<m-1;k++)
         {
             a[i][j]= a[i][j]+a[k][j];
         }
     }

     a[m-1][n-1]=0;
     for(i=0;i<m-1;i++)
     {
         for(j=0;j<n-1;j++)
         {
             a[m-1][n-1]= a[m-1][n-1]+a[i][j];
         }
     }

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
  return 0;
}
