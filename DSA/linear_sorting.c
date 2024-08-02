#include<stdio.h>


int l_search(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i] == element)
		{
			return i;
		}
	}
    return -1;
}

int main()
{
	int arr[]= {33,54,64,64,23,12,54,34};
	int element = 64;
	int size = sizeof(arr)/sizeof(int);
	int index = l_search(arr,size,element);
	
	
	printf("Index of %d element is %d",element,index);
	return 0;
}
