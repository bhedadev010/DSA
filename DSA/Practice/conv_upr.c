#include<stdio.h>

int main(){
    char w[]="dev bheda";
    int count=0;
    for(int i=0;w[i]!='\0';i++){
        count++;
    }
    for(int i=0;i<count;i++){
        if(w[i]>=97 && w[i]<=122){
            w[i]-=32;
        }
    }
    printf("%s",w);
}