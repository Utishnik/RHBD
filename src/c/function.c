#include <stdio.h>
#include <stdlib.h>
#include "../h/function.h"

//создать передачу двухмерного массива в функцию
//додоелать хеш функцию
//+

#define PDCFH//PrintDebugCodeFunctionHesh
#define bin_dec_log

char wancoding(long long value)
{
	//char str[100]=char(value);
}

//формула для работы с матрицой в виде ряда чисел C*y-C+x начиная с нуля C*y+x


long long digree(int value,int indicator);

void bin_dec(unsigned char inarr[],unsigned char *outarr,int lenstr,int lencol){
	unsigned char massive[lenstr*lencol];
	for(int i=0;i<lenstr;i++){
		for(int j=0;j<lencol;j++){
			massive[lencol*i+j]=inarr[lencol*i+j];
		}
	}

	#ifdef bin_dec_log
	printf("\n\n\n");
	#endif

	unsigned char dec[lencol];

	for(int i=0;i<lenstr;i++){
		unsigned char res=0;
		for(int j=0;j<lencol;j++){
			res+=digree(massive[((lencol*lenstr)-(lencol*i+j))-1],j);

			printf("%d ",massive[((lencol*lenstr)-(lencol*i+j))-1]);
		}
		dec[i]=res;
		printf("\n");
	}

	for(int i=0;i<lenstr;i++)
	{
		outarr[i]=dec[i];
	}

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

int dec_binary(long long value,unsigned char arr[],long long len)
{
	long long v=value;
	unsigned char remainder=0;
	unsigned char remainder_arr[len];
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
		long long Dec_result_sum_polynomials=0; 
		int j=0;
		char Alfawit[15];
		for(int i=65;i<=79;i++,j++)
			Alfawit[j]=i;
		char text[size];
		long long result[size];
		for(int i=0;i<size;i++)
			text[i]=(int)*(str+i);
		int endvalue=text[size-1];
		j=0;
		for(int i=0;i<size;i++)
		{
			result[i]=text[i]*(digree(endvalue,j));
			/*
			printf(" j-%d\n",j);
			printf(" text %d\n",((int)text[i]));
			*/
			j++;
		}
		for(int i=0;i<size;i++)
			Dec_result_sum_polynomials+=result[i];

		const int lenARRayBinary=50;
		
		unsigned char Binary[lenARRayBinary];
		int len=dec_binary(Dec_result_sum_polynomials,Binary,lenARRayBinary);
		int len1=dec_binary(Dec_result_sum_polynomials,Binary,lenARRayBinary);
		int k=0;
		unsigned char B21[1000];
		unsigned char B2IBinary=0;

		if(len%4!=0)
		{
			B2IBinary=1;
			k=-(len%4)+4;
			len1=len+k;
			unsigned char Binary2[lenARRayBinary+k];
			for(int i=0;i<k;i++){
				Binary2[i]=0;}
			for(int i=0;i<len;i++)//
				Binary2[i+k]=Binary[i];
			for(int i=0;i<len1;i++)
				B21[i]=Binary2[i];

		#ifdef PDCFH
			for(int i=0;i<len1;i++){
				printf("%d",Binary2[i]);
				if((i+1)%4==0)
					printf(" ");
			}
		#endif
		}
		unsigned char B2[lenARRayBinary+k];
		for(int i=0;i<len1;i++)
			B2[i]=B21[i];

	unsigned char BinSymbolsArr[len1/4][4];

	int z=0;

	for(int i=0;i<(len1/4);i++){
		for(int j=0;j<4;j++){
			BinSymbolsArr[i][j]=B2[z];
		z++;
		}
	}


	#ifdef PDCFH
	printf("\n====================================================\n");
	for(int i=0;i<(len1/4);i++){
		for(int j=0;j<4;j++){
			printf("%d",BinSymbolsArr[i][j]);
		}
		printf(" ");
	}
	printf("\n=====================================================\n");
	#endif
		                                       

	#ifdef PDCFH
		if(B2IBinary==1){
			printf("\n--------------------------------------\n");
			for(int i=0;i<len1;i++){
				printf("%i",B2[i]);
				if((i+1)%4==0)
					printf(" ");
			}
			printf("\n------------------------------------\n");}
	#endif

	#ifdef PDCFH
		printf("Result sam=%d\n",Dec_result_sum_polynomials);
		printf("\nLen = %d\n",len);
		printf("\n------------------------------\n");
		for(int i=0;i<len;i++)
		{
			printf("%d",Binary[i]);
			if((i+1)%4==0)
				printf(" ");
		}
		printf("\n------------------------------\n");

	#endif

	#ifdef PDCFH
		for(int i=0;i<size;i++)
			printf("\nRESULT %d ",result[i]);
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
