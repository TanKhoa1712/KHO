#include<stdio.h>
#include<conio.h>
int KTNT (int a);
int TONGNT (int a);
int main()
{
	int a,b;
	printf( " nhap so can kiem tra ( luu y so can nhap 0>a<20): ");
	scanf ("%d",&a);
	b=KTNT(a);
	if (a> 20 || a<0)
	{
		printf ("so qua lon vui long nhap lai");
	}
	else 
		if (b==0 )
	{ 
	printf("%d khong phai la so nguyen to",a);
	}
	else
	 	{
	 		printf("%d la so nguyen to",a);
	 	printf ("\n%d la tong cac so nguyen to tu 1 toi %d   ",TONGNT (a),a);
	 	};
}
int KTNT (int a)
{
	int i=2; 
	int j=0;
	if (a==2){j=1;}
else for ( i=2; a%i!=0;i++);
if ( i < a - 1) { j=0;}
else {j=1;};
return j;
}
int TONGNT(int a)
{
	int i,n;
	int m= 0;
	for(n=2; n<a;n++) 
	 { 
	 for ( i=2; n%i!=0;i++)
if ( i <n - 1) { m=m+0;}
else {m=m+n;};}
return m;
}