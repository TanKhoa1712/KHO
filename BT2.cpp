#include<stdio.h>
int giaithua(int a);
int main()
{
	int a;
	printf("nhap so nguyen a    ");
	scanf ("%d",&a);
	printf("giai thua cua so n!= %d    ", giaithua(a));
}
int giaithua (int a)
{
	int i, gt=1;
	for (int i=1; i<=a;i++)
	gt=gt*i;
	return gt;
}
