#include <stdio.h>
int main()
{
    int size,i;
    printf("Enter a arrat size");
    scanf("%d",&size);
    int a[size];
    for (i=0;i<size;i++)
    {
    printf("Enter element");
    scanf("%d",&a[i]);
    }
    for (i=0;i<size;i++)
    {
     printf("%d\n",a[i]);
    }
}