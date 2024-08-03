#include<stdio.h>

int l_search(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("ELment found at %d",i+1);
            return 1;
        }
    }
    printf("element not found");
}

int b_search(int arr[],int size,int element)
{
    int low=0,mid,high=size-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==element)
        {
            printf("ELment found at %d",mid+1);
            return 1;
        }
        else if(element<arr[mid])
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    printf("element not found");

}

int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int size= sizeof(arr)/sizeof(int);
int element = 800;
l_search(arr,size,element);
printf("\n\n");
b_search(arr,size,element);
return 0;

}