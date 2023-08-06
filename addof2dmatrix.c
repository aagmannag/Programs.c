#include<stdio.h>
void main()
{
    int m,n,j,i;
    printf("enter row value ");
    scanf("%d",&m);
    printf("enter clumn value");
    scanf("%d",&n);
    int x[m][n];
    int y[m][n];
    int z[m][n];
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            z[i][j]=x[i][j]+y[i][j];
            printf("%d \t",z[j][i]);
        }
        printf("\n");
    }
}