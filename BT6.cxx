#include<stdio.h>
int snt (int a);
int main()
{
	int a,b;
	printf ("nhap so can kiem tra so nguyen to ");
	scanf("%d",&a);
	b=snt(a);
	printf ("ket qua so %d la %d",a,b);
	printf("\n chu thich 1 la so nguyen to con 0 thi so do khong phai so nguyen to");
}
int snt ( int a)
{
	int i,j;
	if (a==2){j=1;}
else for ( i=2; a%i!=0;i++);
if ( i < a - 1) { j=0;}
else {j=1;};
return j;
}