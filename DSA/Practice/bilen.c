#include<stdio.h>

int linears(int arr[],int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            printf("element found");
            return 1;
        }
    }
    printf("element not found");
    return 1;
}

int binarys(int arr[],int size,int element){
    int low=0;
    int mid;
    int high=size-1;
    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==element){
            printf("found");
            return 1;
        }
        else if(arr[mid]>element){
            high=mid-1;
        }
        else{
            low = mid+1;
        }
    }
    printf("not  found");
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int element = 10;
    linears(arr,size,element);
    binarys(arr,size,element);
    return 0;
}