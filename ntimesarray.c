#include<stdio.h>
int main()
{
    int n;
    printf("enter a value of an array");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter value",n);
        scanf("%d",&x[i]);


    }
    return 0;
}