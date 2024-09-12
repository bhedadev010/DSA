#include <stdio.h>

int main() {
    char l[]= "WOW DEV";
    int count=0;
    while(l[count]!='\0'){
        count++;
    }

    printf("%d\n\n",count);
    
    for(int i=0;i<=count-1;i++){
        if(l[i]>=65 && l[i] <=90){
            l[i]+=32;
        }
    }

    printf("%s",l);
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