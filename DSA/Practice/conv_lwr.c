#include<stdio.h>

int main(){
    char w[] = "DEV BHEDA";
    int count=0;
    for(int i=0;w[i]!='\0';i++){
        count++;
    }


    for(int i=0;i<9;i++)
    {
        if(w[i]>=65 && w[i]<=90)
        {
            w[i]+=32;
        }
    }
    printf("%s",w);
    return 0;
}