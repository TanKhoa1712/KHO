#include<stdio.h>
int ucln (int a, int b);
int main()
{
	int a,b;
	printf("nhap hai so can tim uoc chung lon nhat  ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("uoc chung lon nhat cua %d va %d la %d",a,b,ucln(a,b));
}
int ucln (int a,int b)
{
	if (a==0 || b==0){ return 0;}
	while (a!=b)
	{
	if (a>b) { a-=b;} 
	else {b-=a;}
}
return a;
}