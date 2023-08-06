#include<stdio.h>
void main()
{
    char *ptr,str[40];
    printf("Enter a string");
    fgets(str,40,stdin);
    ptr= &str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr++);
    }
}
