#include<stdio.h>

int l_search(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("Element %d found at %d",arr[i],i+1);
            return 1;
        }
    }
    printf("Element not found :<");
}

int b_search(int arr[],int size, int element)
{
    int low=0,mid,high=size-1;

    while(low<=high)
    {
        mid = (high+low)/2;
        if(arr[mid]==element)
        {
            printf("Element %d found at %d",arr[mid],mid+1);
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
    printf("Element not found");
}

int main()
{
    int element;
    int arr[]={1,56,3,5,7,4,6,2};
    int arr2[]={2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    int size2=sizeof(arr)/sizeof(int);
    // printf("enter element :");
    // scanf("%d",&element);
    // l_search(arr,size,element);
    printf("\n\nenter element :");
    scanf("%d",&element);
    b_search(arr2,size2,element);
    return 0;

}