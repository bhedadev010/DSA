#include<stdio.h>

int main()
{
    char start[] = "hello world";
    char ds[50];

    int i = 0;
    while(start[i]!='\0')
    {
        ds[i] = start[i];
        i++;
    }

ds[i] = '\0';

printf("%s",ds);
return 0;
}

