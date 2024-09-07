#include <stdio.h>

int main() {
    char l[50]= "wow dev";
    char m[]= " nice";
    int i=0;
    int j=0;
    while(l[i]!='\0'){
        i++;
    }
    while(m[j]!='\0'){
        l[i]=m[j];
        i++;
        j++;
    }
    printf("%s",l);
    
    return 0;
}