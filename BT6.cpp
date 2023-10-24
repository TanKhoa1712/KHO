#include<stdio.h>
#include<conio.h>
int SNT (int a);
int main ()
{
	int a ,snt;
	printf("nhap so can kiem tra a   ");
	scanf("%d",&a);
	snt=SNT(a);
	printf("Tra ket qua %d",snt);
}
int SNT (int a)
{
int j,i,d;
d=a-1;
if(a==2){j=1;
}
else{
for (i =2; a%i!=0 ;i++)
{
if (i<d)
 {
j=0;}
else {j=1;};
}
return j;
}
}
