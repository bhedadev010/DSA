#include<stdio.h>

int ls(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int element =5;
    int arr[] = {1,5,4,3,7,6,4,8};
    int size = sizeof(arr)/sizeof(int);
    printf("%d\n",size);
    int index = ls(arr,size,element);
    printf("ELEMENT FOUND AT INDEX : %d",index);
    return 0;
}