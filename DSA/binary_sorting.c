#include<stdio.h>

int binary_search(int arr[],int size,int element)
{
    int low=0,mid,high=size-1;
    
    while(low<=high)
    {
        mid = (high+low)/2;
        if(arr[mid]==element)
        {
            printf("Element %d found at index %d",arr[mid],mid+1);
            return 1;
        }
        else if(element<arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    printf("Element not found!!!");
}

int main(){
int element= 200;
int arr[5]={10,20,30,40,50};
int size = sizeof(arr)/sizeof(int);
binary_search(arr,size,element);
return 0;

}