#include<stdio.h>
#include<stdlib.h>


int main(){
    char str1[]="wow dev";
    char str2[]="wowdev";

    int i=0;
    int j=0;

    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        j++;
    }

    printf("%d,%d",i,j);

    if(i!=j){
        printf("not same");
    }
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]==(str2[i])){
            continue;
        }
        else{
            printf("not same");
            return 0;
        }
    }
    printf("same");

    return 0;
}