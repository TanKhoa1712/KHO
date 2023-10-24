#include<stdio.h>
#include<conio.h>
int hcn (int a, int b);
int main ()
{
	int a, b, dientich;
	printf("nhap chieu dai a   ");
	scanf("%d",&a);
		printf("nhap chieu rong b   ");
	scanf("%d",&b);
	dientich=hcn(a,b);
	printf("   dien tich hinh chu nhat  %d", dientich);
}
int hcn (int a, int b)
{
	int s;
	if (a*b!=0){s=a*b;}
	else  { printf(" ERROR");}	
	return s;
}
