#include <stdio.h>
#include <stdlib.h>
#include "../h/function.h"
#include <string.h>

int main(void)
{
	char str[]="Efficitur in pulvinar lectus sodales nec eleifend sapien et amet, vel in lacinia quis, habitasse orci, mollis sit hac sit amet, interdum vestibulum sed dictumst. Vestibulum mattis quis, dui orci, elit. Pulvinar efficitur dui tortor, mollis odio. Aenean quis, et amet, leo, vel aenean sodales ipsum in";
	char str1[strlen(str)];
	for(int i=0;i<(strlen(str));i++){
		str1[i]=str[i];
	}
	for(int i=0;i<(strlen(str));i++){
		str[(strlen(str)-1)-i]=str1[i];
	}
	char massive[strlen(str)];
	int lenh=FunctionHesheng(str,massive,strlen(str));
	for(int i=0;i<lenh;i++)
	{
		printf("%c",massive[i]);
	}

}

