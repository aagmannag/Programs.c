#include<stdio.h>
int main()
{
    int x[5]={1,5,55,43,56};
    int y[5]={4,6,5,3,2};
    int c[5];
    for(int i=0;i<=4;i++)
    {
    c[i]=x[i]+y[i];
        printf("%d \n",c[i]);

    }
    return 0;
}