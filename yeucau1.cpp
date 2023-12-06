#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a,b;
int c[100][100];

void nhap(int z[100][100],int &x, int &y)
{
	printf("Nhap so cot: ");
	scanf("%d",&x);
	printf("Nhap so dong: ");
	scanf("%d",&y);
	for (int i=0;i<x;i++)
	{
		for(int j=0; j<y;j++)
		{
			printf ("Nhap phan tu [%d][%d]",i,j);
			scanf("%d",&z[i][j]);
		} 
	}
}
void xuat(int z[100][100],int &x, int &y)
{
	for (int i=0;i<x;i++)
	{
		for(int j=0; j<y;j++)
		{
			if (j==0)
			{
			printf("\n");
			}
			printf ("%10d",z[i][j]);
		}
	}
	printf("\n");
}
void sapxep (int z[100][100],int &x, int &y)
{
	int k=x*y;
	int temp = 0;
	for (int i=0;i<k-1;i++)
	{
		for(int j=i+1; j<k;j++)
		{
			if (z[i/y][i%y]>z[j/y][j%y])
			{
				temp= z[i/y][i%y];
				z[i/y][i%y]=z[j/y][j%y];
				z[j/y][j%y]=temp;
			}
		}
	}
	xuat(z,x,y);
}
int ktnt(int d)
{
    if (d<=0)
    {
    return 0;
    }
    else
    {
	if (d<=2)
	{
		return 1;
	}
	else 
	{
		for (int i=2; i<d;i++)
		{
			if(d%i==0)
			{
				return 0;
			}
		}
	}
    }
	return 1;
}
int ktchiahetcho3( int d)
{
	if (d%3==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void tinhtong(int z[100][100],int &x, int &y)
{
	int tong=0;
	for (int i=0;i<x;i++)
	{
		for(int j=0; j<y;j++)
		{
			if (ktnt(z[i][j]))
			{
				tong=tong+z[i][j];
			}
		}
	}
		for (int i=0;i<x;i++)
	{
		for(int j=0; j<y;j++)
		{
			if (ktchiahetcho3(z[i][j]))
			{
				tong=tong+z[i][j];
			}
		}
	}
	printf("Tong la: %d",tong);
	printf("\n");
}
int main ()
{
	int key;
	do
	{
		
		printf("---------------------------------------------------------\n");
		printf("|	1. Nhap mang					|\n");
		printf("|	2. Sap xep mang					|\n");
		printf("|	3. Tinh tong nguyen to va chia het cho 3	|\n");
		printf("|	4. Thoat					|\n");
		printf("---------------------------------------------------------\n");
		printf("		Nhap lua chon: ");
		scanf("%d",&key);
		switch (key)
		{
			case 1:
			system("cls");
			fflush(stdin);
			nhap(c,a,b);
			xuat(c,a,b);
			break;
			case 2:
			system("cls");
			sapxep(c,a,b);
			break;
			case 3:
			system("cls");
			tinhtong(c,a,b);
			break;
			case 4:
			system("cls");
			printf("\nVui long nhan Enter de thoat\n");
			exit(4);
			break;
		}
	}while(key!=4);
}
