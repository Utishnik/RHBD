#include <stdio.h>
#include <stdlib.h>

#define Size 10

void print_arr(int *arr,int size)
{
	int *p=arr+size;
	for(;arr<p;arr++)
		printf("%d ",*(arr));
}

int main(void)
{
	int arr[Size]={1,2,3,4,0,6,7,8,9,10};
	print_arr(arr,Size);
}
