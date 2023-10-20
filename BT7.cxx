#include<stdio.h>
int hoanvi (int &a, int &b);
int main()
{
	int a,b;
	printf("nhap so a    ");
	scanf("%d",&a);
	printf("nhap so b    ");
	scanf("%d",&b);
	printf (" a va b la %d va %d", a,b);
	hoanvi(a,b);
	printf ("\n a va b sau hoan vi la %d va %d",a,b);
}
int hoanvi (int &a, int &b)
{
a=a+b;
b=a-b;
a=a-b;
}
