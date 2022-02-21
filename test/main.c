#include <stdio.h>
#include <stdlib.h>

int str_len(char str[])
{
	int len=0;

	for(int i=0;*(str+i)!='\0';i++,len++);

	return len;
}

int main(void)
{
	char *str="bl";
	printf("%d\n",str_len(str));
}
