#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char s1[50],s2[50];
int nhapchuoi(char x[50])
{
	printf("nhap chuoi ki tu vao: ");
	gets(x);
}
int xuatchuoi(char x[50])
{
	printf("chuoi ki tu la: ");
	puts(x);
}
void xoa(char x[100], int z)
{
	int e = strlen(x);
	for (int i=z;i<e;i++)
	{
		x[i]= x[i+1];
		x[e]='\0'; 
	}
}
void xoakitu(char x[50])
{
	int d=0;
		if (x[0]==' ')
	{
		xoa(x,d);
	};
	if (x[strlen(x)-1]==' ')
	{
		xoa(x,strlen(x)-1);
	};
	for (int i=0;i<strlen(x);i++)
	{
		if (x[i]==' ' && x[i+1]==' ')
		{
			xoa(x,i);
			i--;
		}
	}
}
void chuanhoachuoi(char x[50])
{
strlwr(x);
xoakitu(x);
x[0]-=32;
for (int i=0;i<strlen(x);i++)
{
	if(x[i]==' ' && x[i+1]!=' ')
	{
		x[i+1]-=32;
	}
}	
}
int demtu(char x[50])
{
	int dem=0;
	for (int i=0;i<(strlen(x)-1);i++)
{
	if(x[i]==' ' && x[i+1]!=' ')
	{
		dem++;
	}
}
return dem;
}
void demkitu(char x[50])
{
	char g;
	int s=0;
	fflush(stdin);
	printf("\n nhap ki tu can tim: ");
	scanf("%c",&g);
	for (int i=0;i<strlen(x);i++)
	{
		strlwr(x);
		if(g==x[i])
		{
			printf("\n ki tu xuat hien o vi tri thu %d",i);
			s++;
		}
	};
	if (s==0)
	{
		printf("\n ki tu khong xuat hien lan nao!");
	}
	else
	{
		printf("\nso lan ki tu %c xuat hien la: %d",g,s);
	}
	printf("\n");
	chuanhoachuoi(x);
}
int main()
{
int key;
	do
	{
		fflush(stdin);
		printf("---------------------------------------------------------\n");
		printf("|	1. Nhap chuoi					|\n");
		printf("|	2. Tim ki tu					|\n");
		printf("|	0. Thoat					|\n");
		printf("---------------------------------------------------------\n");
		printf("		Nhap lua chon: ");
		scanf("%d",&key);
		switch (key)
		{
			case 1:
				fflush(stdin);
				nhapchuoi(s1);
				chuanhoachuoi(s1);
				xuatchuoi(s1);	
				break;				
			case 2:
				demkitu(s1);	
				break;
			case 0:
				printf(" Nhan Enter de thoat");
				break;
		}
	}
		while(key!=0);
}
