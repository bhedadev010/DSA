#include<stdio.h>

int main(){
    char a[]="hello";
    int c=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    char b[50];
    int i=0;
    for(int j=c-1;j>=0;j--){
        b[i]=a[j];
        i++;
    }
    printf("%s",b);
    return 0;
}