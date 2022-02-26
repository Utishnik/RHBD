#include <stdio.h>
#include <stdlib.h>
#include "../h/function.h"

int main(void)
{
	char massive[3];
	//FunctionHesheng("ABC",massive,3);
	unsigned char byts[8]={1,0,1,0,1,1,1,1};
	unsigned char out[1]={0};
	bin_dec(byts,out,2,4);
	printf("%d\n",out[0]);
}

/*
1 0 1 0
1 1 1 1
*/