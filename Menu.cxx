#include<stdio.h>
#include<conio.h>
int nhap(int x[], int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("\nnhap phan tu thu [%d]: ", i);
		scanf("%d", &x[i]);
	}
}
int xuat(int x[], int a)
{
	for (int i = 0; i < a; i++)
	{
		printf("\nphan tu thu [%d]: %d", i, x[i]);
	}
}
int timgiatri(int x[100], int a, int k)
{
	for (int i = 0; i < a; i++)
	{
		if (x[i] == k)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
void xoagiatritai(int x[100], int &a, int g)
{
	for (int i = g; i < a - 1; i++)
	{
		x[i] = x[i + 1];
	}
	a--;
}
void giatricanxoa(int x[100], int &a)
{
	int gt;
	printf("nhap gia tri muon xoa");
	scanf("%d", &gt);
	for (int i = 0; i < a; i++)
	{
		if (x[i] == gt)
		{
			xoagiatritai(x, a, i);
		}
	}
}
void chengiatri(int x[], int &a)
{
	int z, v;
	printf("nhap vi tri muon chen");
	scanf("%d", &z);
	printf("nhap gia tri muon chen");
	scanf("%d", &v);
	for (int i = a+1; i == z; i--)
	{
		x[i] = x[i - 1];
	}
	x[z] = v;
	a++;
}
int main()
{
	char lc;
	int a;
	printf("\n Nhap mang: ");
	scanf("%d",&a);
	int b[a+100];
	nhap(b,a);
	getch();
	do
	{
	    printf("\n");
	printf("MENU");
	printf("Hay chon thao tac muon thuc hien");
	printf("\n***Luu y: "
	       "\n Nhap ki tu dau tien o cac lua chon de thao tac" );
	printf("\n1. Xuat mang");
	printf("\n2. Xoa gia tri trong mang "); 
    printf("\n3. Chen gia tri trong mang");
    printf("\nX. Thoat \n");
	scanf("%c",&lc);
	if (lc=='1')
	{
	    xuat(b,a);
	}
	else 
	{
	    if (lc=='2')
	{
	   giatricanxoa(b,a);
	}
	else
	{
	    if (lc =='3')
	    {
	        chengiatri(b,a);
	    }
	    else {}
	}
	}
	getch();
	}
	while(lc !='x');
}
