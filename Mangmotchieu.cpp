#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
int nguyento(int b[], int a);
int ktnt(int b[], int a);
int max(int b[],int a);
int tich(int b[], int a);
int main ()
{	
int a,i,dem,z,nguyento;
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
		dem=0;
			for (i=0;i<a;i++)
	{
		ktnt(b,a);
	if (ktnt(b[i])==1)
	{
		nguyento=nguyento+b[i];
		dem++;
	};
	};
	return nguyento;
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
int ktnt(int b[], int a)
{

int ktnt=b[0];
int i,j;
	
		for (i=0;i<a;i++)
	{
		if (b[i]>2)
		{
			j=0;
		}
			int i=2; 
			int j=0;
			if (b[i]==2){j=1;}
			else for ( i=2; b[i]%i!=0;i++);
			if ( i < a - 1) { j=0;}
			else {j=1;};
			return j;	
	};
}
