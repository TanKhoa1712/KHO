#include<stdio.h>
int hcn (int a, int b);
int main()
{
	int a,b;
	printf("nhap hai canh cua hinh chuw nhat  ");
	scanf ("%d",&a);
	scanf ("%d",&b);
	printf (" dien tich hinh chu nhat %d %d = %d", a,b,hcn(a,b));
	
}
int hcn ( int a, int b)
{
	int s;
	s=a*b;
	return s;
}