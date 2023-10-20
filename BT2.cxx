#include<stdio.h>
int giaithua (int a);
int main ()
{
	int a;
	printf("nhap so can tinh giai thua   ");
	scanf ("%d",&a);
	printf("giai thua cua so %d! =%d  ",a,giaithua(a));
}
int giaithua(int a)
{
	if (a<2 ) {return a;}
	return a* giaithua (a-1);
}