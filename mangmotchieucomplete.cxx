#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
void xoagiatri(int a,int k, int b[]);
void TangDan(int a,int b[]);
void kt(int x,int a,int b[]);
int tongnt( int &s,int &dem,int a,int b[]);
int ktnt(int a);
int max(int b[],int a);
int tich(int b[], int a);
int main ()
{	
int a,i,dem,x,z,k;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&a);
	int b[a];
	for (i=0;i<a;i++)
	{
		printf("nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&b[i]);
	};
		for (i=0;i<a;i++)
	{
		printf("\nphan tu thu %d la: %d ",i+1,b[i]);
	};
		printf("\n so lon nhat trong mang la: %d",max(b,a));
		printf("\n tich cac so nguyen trong mang la: %d",tich(b,a));
		dem=0;int s=0;
		tongnt(s,dem,a,b);
	printf("\n so luong so nguyen to co trong mang la:  %d",dem);
	printf("\n tong so nguyen to la:  %d",s);
	printf("\n nhap gia tri x: ");
	scanf("%d",&x);
	kt(x,a,b);
	TangDan(a,b);
	printf("\ngia tri mang duoc sap xep lai nhu sau: ");
	for (i=0;i<a;i++)
	{
		printf("\nphan tu thu %d la: %d ",i+1,b[i]);
	};
	printf("\nthay doi gia tri thu z cua mang: ");
	scanf("%d",&z);
	if (z>a||z<0)
	{ 
	printf("\nloi gia tri vuot qua mang");
	}
else
	{
	printf("\n nhap gia tri moi: ");
	scanf("%d",&b[z-1]);
	};
	printf("\ngia tri mang sau thay doi la");
	for (i=0;i<a;i++)
	{
		printf("\nphan tu thu %d la: %d ",i+1,b[i]);
	};
	printf("\nnhap gia tri de xoa gia tri can xoa trong mang");
	scanf("%d",&k);
	xoagiatri(a,k,b);
	for (i=0;i<a;i++)
	{
		printf("\nphan tu thu %d la: %d ",i+1,b[i]);
	}
		return 0;
}
int max(int b[], int a)
{

int	max=b[0];
int i;
	
		for (i=0;i<a;i++)
	{
		if (max<b[i])
		{
			max=b[i];
		}
		
	};
	return max;
}
int tich(int b[], int a)
{

int	tich=1;
int i;
		for (i=0;i<a;i++)
	{
	tich=tich*b[i];
	};
	return tich;
}
int ktnt(int a)
{
	int j;
	if (a<2)
	{
		return 0;
	}
	else 
	{
		for (j=2; j*j<=a;j++)
		{
			if (a%j==0)
			{
				return 0;
			}
		}
		return 1;
	}
}
int tongnt( int &s,int &dem,int a,int b[])
{
	for (int i=0; i<a ; i++)
	{
		if (ktnt(b[i]))
		{
			s+=b[i];
			dem++;
		};
	};
	return s;
}
void kt(int x,int a,int b[])
{
	int d=0;
	for ( int i=0;i<a;i++)
	{
		if (x==b[i])
		{
			printf("\ngia tri cua x bang voi gia tri thu %d trong mang cung bang %d", i+1,b[i]);
		}
		else { d++;}
	}
	if (d==a)
	{
		printf("ko co so nao = x ca");
	}
}
void TangDan(int a,int b[])
{
    int tg;
    for(int i = 0; i < a - 1; i++)
    {
        for(int j = i + 1; j < a; j++)
        {
            if(b[i] > b[j])
            {
                tg = b[i];
                b[i] = b[j];
                b[j] = tg;        
            }
        }
    }
}
void xoagiatri(int a,int k, int b[])
{
	for (int i=0;i<a;i++)
	{
		if (b[i] == k)
		{
			b[i]=0;
		}
	}
}