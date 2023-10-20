#include<stdio.h>
int tinhtong(int a, int b);
int main()
{
	int a,b;
printf("nhap hai so a va b      ");	
scanf("%d",&a);
scanf("%d",&b);
printf("tong %d +%d =%d",a,b,tinhtong(a,b));
}
int tinhtong ( int a, int b)
{
	int s;
	s=a+b;
	return s;
}