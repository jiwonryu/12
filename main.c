#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (void){
	FILE *fp;
	char input[100];
	
	fp= fopen("sample.tst","r");
	
	while ( fgets(input, 100, fp) != NULL)
	{
		printf(input);
	}
	
	fclose(fp);
	
	return 0;
}

