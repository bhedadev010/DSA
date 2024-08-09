#include <stdio.h>

int main() {
    char l[50]= "wow dev";
    int i=0;
    char wow[18];
    int j=0;
    while(l[i]!='\0'){
        i++;
    }
    for(int w=i-1;w>=0;w--){
        wow[j]=l[w];
        j++;
    }
    printf("%s",wow);
    
    
    return 0;
}