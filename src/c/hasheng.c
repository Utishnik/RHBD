#include <stdio.h>
#include <stdlib.h>
#include "../h/hesheng.h"

char wancoding(long long value)
{
	//char str[100]=char(value);
}

int dec_binary(long long value,long long arr[],long long len)
{
	long long v=value;
	long long remainder=-1;
	long long remainder_arr[len];
	int i=0;
	int lenn=0;
	while (v!=0)
	{
		remainder=v%2;
		v=(v-remainder)/2;
		remainder_arr[i]=remainder;
		//printf("%d ",remainder_arr[i]);
		i++;
		lenn++;
	}
	for(int i=0;i<lenn;i++)
	{
		arr[(lenn-1)-i]=remainder_arr[i];
	}
	return lenn;
}
