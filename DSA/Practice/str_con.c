#include<stdio.h>

int main(){
    char m[50]="hello";
    char n[]="world";
    int count=0;
    for(int i=0;m[i]!='\0';i++){
        count++;
    }
    for(int i=0;n[i]!='\0';i++){
        m[count]=n[i];
        count++;
    }
    printf("%s",m);
    return 0;
}