#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Sinhvien
{ 
char Masv[100];
char Hotensv[100];
char Phai[10];
float Diemtoan;
float Diemvan;
float DiemAV;
float KQHT;
char Xeploai[40];
};
typedef Sinhvien sv;
void nhap(sv a[], int i)
{
	printf("Sinh vien so %d\n",i+1);
	fflush(stdin);
	printf("Nhap ma so sinh vien: "); gets(a[i].Masv);
	fflush(stdin);
	printf("\nNhap ten sinh vien: "); gets(a[i].Hotensv);
	fflush(stdin);
	printf("\nNhap phai: "); gets(a[i].Phai);
	fflush(stdin);
	printf("\n Nhap Diem Toan: ");scanf("%2f",&a[i].Diemtoan);
	fflush(stdin);
	printf("\n Nhap Diem Toan: ");scanf("%2f",&a[i].Diemvan);
	fflush(stdin);
	printf("\n Nhap Diem Toan: ");scanf("%2f",&a[i].DiemAV); 
	system("cls");
}
int ketquahoctap (sv a[],int i)
{
	a[i].KQHT=(a[i].Diemtoan*2+a[i].Diemvan*2+a[i].DiemAV)/5;
}
void xuat (sv a[],int i)
{
	printf("|%10s|%29s|%4s|%9.2f|%8.2f|%7.2f|%4.2f|%20s|\n",a[i].Masv,a[i].Hotensv,a[i].Phai,a[i].Diemtoan,a[i].Diemvan,a[i].DiemAV,a[i].KQHT,a[i].Xeploai);
}
void xeploai(sv a[],int i)
{
	if ( a[i].KQHT<=1.5)
	{
		strcpy(a[i].Xeploai,"Yeu");
	}
	else if ( a[i].KQHT<=2.5)
		{
			strcpy(a[i].Xeploai,"Trung Binh");
		}
		else if ( a[i].KQHT<=3.5)
			{
			strcpy(a[i].Xeploai,"Kha");
			}
			else if ( a[i].KQHT<=3.7)
				{
					strcpy(a[i].Xeploai,"Gioi");
				}
				else if ( a[i].KQHT>3.7)
					{
						strcpy(a[i].Xeploai,"Xuat Sac");
					}
}
void sapxep (sv a[], int b)
{
	sv temp;
	for (int i=0;i<b;i++)
		{
			for (int j=i+1;j<b;j++)
			{
				if (a[i].KQHT<a[j].KQHT)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					
				}
			}
		}
}
					
					
int main ()
{
	int b;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&b);
	sv a[b];
	system("cls");
	int key;
	do
	{
		fflush(stdin);
		printf(".................................................................");
		printf("\n:	1. Nhap thong tin sinh vien/ in danh sach		:");
		printf("\n:	2. In danh sach sinh vien theo KQHT tang		:");
		printf("\n:	0. Thoat						:\n");
		printf(".................................................................");
		printf("\n Nhap lua chon: ");
		scanf("%d",&key);
		switch (key)
		{
			case 1:
				system("cls");
				for (int i=0;i<b;i++)
				{
					nhap(a,i);
				}
				system("cls");
				printf("|----------|-----------------------------|----|---------|--------|-------|----|--------------------|\n");
				printf("|   Ma so  |         Ten sinh vien       |Phai|Diem Toan|Diem Van|Diem AV|KQHT|       Xep loai     |\n");
				printf("|----------|-----------------------------|----|---------|--------|-------|----|--------------------|\n");
				for (int i=0;i<b;i++)
				{
					ketquahoctap(a,i);
					xeploai(a,i);
					xuat(a,i);	
				}
				printf("|----------|-----------------------------|----|---------|--------|-------|----|--------------------|\n");
				break;
				case 2:
				system("cls");
				sapxep(a,b);
				printf("|----------|-----------------------------|----|---------|--------|-------|----|--------------------|\n");
				printf("|   Ma so  |         Ten sinh vien       |Phai|Diem Toan|Diem Van|Diem AV|KQHT|       Xep loai     |\n");
				printf("|----------|-----------------------------|----|---------|--------|-------|----|--------------------|\n");
				for (int i=0;i<b;i++)
				{
					ketquahoctap(a,i);
					xeploai(a,i);
					xuat(a,i);	
				}
				printf("|----------|-----------------------------|----|---------|--------|-------|----|--------------------|\n");
				break;
				case 0:
				exit(1);
				default:
				printf("Vui long nhap lai lua chon phu hop");
				break;	
		};
	}while(key!=0);
}				
