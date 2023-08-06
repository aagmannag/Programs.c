#include<stdio.h>
void main()
{
    int m,n,j,i;
    printf("enter row value ");
    scanf("%d",&m);
    printf("enter clumn value");
    scanf("%d",&n);
    int x[m][n];
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d \t",x[j][i]);
        }
        printf("\n");
    }
}
