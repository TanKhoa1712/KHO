#include<stdio.h>
int ucln(int a, int b);
int main()
{
	int a,b;
	printf("nhap so nguyen a    ");
	scanf ("%d",&a);
	printf("nhap so nguyen b    ");
	scanf ("%d",&b);
	printf("uoc chung lon nhat la a= %d   ",ucln(a,b));
}

int ucln(int a, int b){
    if (a == 0 || b == 0){
        return 0;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a; 
}
