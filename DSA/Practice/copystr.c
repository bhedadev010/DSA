#include<stdio.h>

int main(){
    char a[]= "dev";
    char b[50];
    int c=0;
    for(int i=0;a[i]!='\0';i++){
        b[i]=a[i];
        c++;
    }
    b[c]='\0';
    printf("%s",b);
}