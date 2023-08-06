#include<stdio.h>
void main()
{
    int n,s,f,l,m;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a no yo be find");
    scanf("%d",&s);
    f=0;
    l=n-1;
    while(f<=l)
    {
        m=(f+l)/2;
        if(m==s)
        printf("present");
        break;
    }
        else if(m>s)
        {
        l=m-1;
        }
        else
        {
        f=m+1;

    }
}