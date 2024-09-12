#include<stdio.h>

int main(){
    char a[70]="wow dev";
    char b[]="noice";
    int i=0;

    while(a[i]!='\0'){
        i++;
    }
    for(int j=0;b[j]!='\0';j++){
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}