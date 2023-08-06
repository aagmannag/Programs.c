#include<stdio.h>
void main()
{
    int m ,n,i,j,sum=0;
    printf("Enter the no. of row and columns");
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&mat[i][j]);
            
        if((i==j)||((i+j)==(m-1)))
          sum=sum+mat[i][j];
        }
    }
    printf("The created matrix is\n");
 
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
            printf("%d",sum);

}