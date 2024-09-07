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

    return 0;
}