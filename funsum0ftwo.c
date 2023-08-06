#include<stdio.h>
void sum (int a,int b)
{
    int sum;
    sum=a+b;
    printf("%d",sum);
}
void mult(int c,int d)
{
    int mult;
    mult=c*d;
    printf("%d",mult);
}
void main()
{
    int m,n;
    printf("Enter two no. for sum");
    scanf("%d %d",&m,&n);
    sum(m,n);
    int i,j;
    printf("Enter two no. for mult");
    scanf("%d %d",&i,&j);
    mult(i,j);
}