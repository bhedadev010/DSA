#include<stdio.h>

int main()
{   
    int i=0;
    char name[50];
    printf("enter name :");
    gets(name);

    int count=0;
    for(int j=0;name[j]!='\0';j++)
    {
        count++;
    }
    printf("%d",count);
    

    return 0;
}

