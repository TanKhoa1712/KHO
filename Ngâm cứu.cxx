#include <stdio.h>
int KTNT(int n)
    {
    if (n <= 1)
	{
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
	{
            return 0; 
    }
    }
    return 1; 
    }
int TONGNT(int n)
    {
    int sum = 0;
    for (int i = 2; i <= n; i++)
	{
        if (KTNT(i))
	{
            sum += i;
    }
    }
    return sum;
    }

int main()
    {
    int n;
    do
	{
        printf("Nhap mot so nguyen duong n (0 < n < 20): ");
        scanf("%d", &n);
    }
	while (n <= 0 || n >= 20);
    if (KTNT(n))
	{
        printf("%d la so nguyen to.\n", n);
    }
	 else
	{
        printf("%d khong phai la so nguyen to.\n", n);
    }
    int tong = TONGNT(n);
    printf("Tong cac so nguyen to tu 1 den %d lą: %d\n", n, tong);
    return 0;
    }

