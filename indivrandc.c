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
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+x[i][j];
        }
        printf("row total =%d \n",sum);


    }
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+x[j][i];
        }      
        printf("column total=%d\n",sum);

    }
}

