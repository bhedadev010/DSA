#include <stdio.h>

int main() {
    char l[]= "wow dev";
    int count=0;
    while(l[count]!='\0')
    {
        count++;
    }
    for(int i =0;i<=count;i++){
        if(l[i]>=97 && l[i]<=122){
            l[i]-=32;
        }
    }
    printf("%s",l);
    return 0;
}