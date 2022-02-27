#include <stdio.h>
#include <stdlib.h>
#include "../h/function.h"

int main(void)
{
	char massive[3];
	//FunctionHesheng("ABC",massive,3);
	const int lenbyts=8;
	unsigned char byts[8]={1,0,1,0,1,1,1,1};
	unsigned char out[8/4]={0};
	bin_dec(byts,out,lenbyts/4,4);

	for(int i=0;i<lenbyts/4;i++)
		printf("%d\n",out[i]);
}

