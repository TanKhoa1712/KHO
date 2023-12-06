#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	FILE *thu;
	char filename[100],lll;
	printf("nhap ten file");
	gets(filename);
	if ((thu=fopen(filename,"w"))==NULL)
	{
		printf("Create file error \n");
		exit(1);
	}
	while((lll=getche() )!='\r')
	putc(lll,thu);
	fclose(thu);
	return 0;
}
