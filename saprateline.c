#include<stdio.h>
int main ()
{
    int n,s,r,i;
    printf("Enter a no.");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;
    }
    printf("%d",s);
     
    
}