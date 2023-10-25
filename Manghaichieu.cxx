#include<stdio.h>
int max(int a, int b, int c[][]);
int main()
{
	int a,b;
	printf ("nhap so dong: ");
	scanf("%d",&a);
	printf ("nhap so cot: ");
	scanf("%d",&b);
	int c[a][b];
	for (int i=0; i<a;i++)
		for (int j=0; j<b;j++)
		{
			printf("\n nhap phan tu thu [%d][%d] cua mang: ", i+1,j+1);
			scanf("%d",&c[i][j]);
		};
		for (int i=0; i<a;i++)
		for (int j=0; j<b;j++)
		{
			printf("%10d",c[i][j]);
			if (j==b -1){if(i<a){printf("\n");}}
		};
		printf("\n so lon nhat trong mang la: %d",max(a,b,c));
		
}
int max(int a, int b, int c[][])
{

int	max=c[0][0];	
		for (int i=0;i<a;i++)
		for (int j=0;j<b;j++)
	{
		if (max<c[i][j])
		{
			max=c[i][j];
		}
		
	};
	return max;
}