#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (void){
	char src[100] = "Programming course";
	char dst[100];
	int i=0;
	
	while ( src[i] != '\0')
	{
	//	dst[i] = src[i];
		i++;
	}
	// dst[i]='\0';
	
	printf("문자열\"%s\"의 길이 : %i" , src, i);
	
	return 0;
}

