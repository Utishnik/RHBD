#include <stdio.h>
#include <stdlib.h>
#include "../h/hesheng.h"

int main(void)
{
	long long arr[100];
	dec_binary(1000000000,arr,(sizeof(arr)/sizeof(arr[0])));
	int len=dec_binary(1000000000,arr,(sizeof(arr)/sizeof(arr[0])));
	printf("=%d=",len);
	for(int i=0;i<len;i++) printf(" %d ",arr[i]);
}