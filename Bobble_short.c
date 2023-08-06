#include<stdio.h>
void main()
{
    int i,j,temp,n;
    printf("Enter a no.");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("sorted array is = %d\n",a[i]);
    }

}


