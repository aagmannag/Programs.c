#include<stdio.h>
#include<string.h>
void main()
{
    char str[40];
    printf("Enter a string\n");
    fgets(str,40,stdin);
    strrev(str);
    printf("The reverse string is %s",str);
}