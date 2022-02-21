#include <stdio.h>
#include <stdlib.h>
#include "../h/function.h"

#define PDCFH//PrintDebugCodeFunctionHesh

char wancoding(long long value)
{
	//char str[100]=char(value);
}
long long digree(int value,int indicator)
{
	if(indicator==0)
		return 1;
	int vtmp=value;
	long long res=value;
	for(int i=0;i<indicator-1;i++)
		res*=value;
	return res;
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

void FunctionHesheng(char *str,char *StrOut,int size)
{
	#ifdef PDCFH
		printf("\n==============\n");
	#endif

		int j=0;
		char Alfawit[15];
		for(int i=65;i<=79;i++,j++)
			Alfawit[j]=i;
		char text[size];
		long long result[size];
		for(int i=0;i<size;i++)
			text[i]=(int)*(str+i);
		int endvalue=text[size-1];
		for(int i=0;i<size;i++,j++)
			result[i]=text[i]*digree(endvalue,j);

	#ifdef PDCFH
		for(int i=0;i<size;i++)
			printf("%d ",result);
		printf("\n");
	#endif

	#ifdef PDCFH
		printf("text:\n");
		for(int i=0;i<size;i++)
			printf("%d ",text[i]);
		printf("\n");
	#endif


	#ifdef PDCFH
		printf("Alfawite:\n");
		for(int i=0;i<15;i++)
			printf("%c",Alfawit[i]);
		printf("\n");
	#endif

}
