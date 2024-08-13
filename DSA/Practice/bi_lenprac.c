#include<stdio.h>

int ls(int arr[],int size,int element)
{
    for(int i=0; i<=size; i++)
    {
        if(arr[i]==element)
        {
            printf("found");
            return 1;
        }
    }
    printf("no");
}

int bs(int arr[], int size, int element)
{
    int low=0,mid,high=size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]==element)
        {
            printf("found");
            return 1;
        }
        else if(arr[mid]<element)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    printf("no");
}

int main(){
    int element = 6;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    ls(arr,size,element);
    bs(arr,size,element);
    return 0;
}