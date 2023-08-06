#include <stdio.h>
int main ()
{
    int a[100],n,i,value;
    printf("Enter a no. of array");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter the value to be updated");
    scanf("%d",&value);
    for(i=n;i>0;i--)
    {
        a[i]=a[i-1];

    }
    a[0]=value;
    printf("the updated array is");
    for (i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}

