#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
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
int noiham(char x[50],char c[50])
{
	char d[150];
size_t e=strlen(x);
size_t f=strlen(c);
	for (int i=0;i<e;i++)
		{
			d[i]=x[i];
		}
	for (int i=0; i<(e+f);i++)
		{
			d[i+e]=c[i];
		}
	xuatchuoi(d);
}
int ktdoixung(char x[50])
{
	for( int i=0; (strlen(x)/2)>i;i++)
	{
	if (x[i]!=x[strlen(x)-i])
	{
		return 0;
	}	
	else
	{
		return 1;
	}
	}
}
int doixung(char x[50])
{
	if (ktdoixung)
	{
		printf("\n chuoi doi xung");
	}
	else
	{
		printf("\n chuoi khong doi xung \n");
	}
}
void indaonguoc(char x[50])
{
	char z[50];
	for (int i=0;strlen(x)>i;i++)
	{
		z[i]=x[strlen(x)-i];
	}
	xuatchuoi(z);
}
void demchuoi(char x1[50], char x2[50])
{
	int dem=0;
	fflush(stdin);
	if (strlen(x1)>=strlen(x2))
	{
	for(int i=0; i<strlen(x1); i++)
			 {  
			  if(x1[i] == x2[0]) 
			 		{ 
					 k = 1;
                         for(int j=0; j<strlen(s2); j++)
						  {
                               if(x2[j] != x[i+j])
							    {  k = 0;
                                      break;
                                }
                         }
                     if(k == 1)
                        dem++;
                     }
             }
             printf("\n So chuoi s2 co trong s1 la: %d",dem);
	}
}
void demkitu(char x[50])
{
	char g;
	int s;
	printf("\n nhap ki tu can tim: ");
	gets(g);
	for (int i=0;i<strlen(x);i++)
	{
		if(g==x[i])
		{
			printf("\n ki tu xuat hien o %d",i);
			s++;
		}
	};
	if (s==0)
	{
		printf("\n ki tu khong xuat hien lan nao!");
	}
}
int main()
{
int key;
	do
	{
printf("************************************\n");
printf("**		 THAO TAC TREN CHUOI 	  **\n");
printf("** 	1. Nhap va chuan hoa chuoi 	  **\n");
printf("**  2. Dem so tu trong chuoi	  **\n");
printf("**  3. Ghep chuoi 				  **\n");
printf("**  4. Kiem tra doi xung 		  **\n");
printf("**  5. In chuoi dao nguoc 		  **\n");
printf("**  6. Tim ki tu 		  		  **\n");
printf("**  0. Thoat 					  **\n");
printf("************************************\n");
fflush(stdin);	
printf("\n \t\t AN PHIM CHON: ");
scanf("%d",&key);
switch(key)
{
case 1:
fflush(stdin);
nhapchuoi(s1);
nhapchuoi(s2);
chuanhoachuoi(s1);
chuanhoachuoi(s2);
xuatchuoi(s1);
xuatchuoi(s2);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 2:
	demtu(s1);
	demtu(s2);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 3:
	noiham(s1,s2);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 4:
	doixung(s1);
	doixung(s2);
printf("\nBam phim bat ky de tiep tuc!");
break;
case 5:
	indaonguoc(s1);
	indaonguoc(s2);
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
case 6:
	demkitu(s1);
	demkitu(s2);
default:
printf("\nKhong co chuc nang nay!");
printf("\nBam phim bat ky de tiep tuc!");
getch();
break;
}
}
	while(key!=0);
}