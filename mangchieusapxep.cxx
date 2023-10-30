#include<stdio.h>
int a[100][100];
int m,n;
void nhapmang(int a[100][100],int &m,int &n)
{
    printf("nhap so dong    ");
    scanf("%d",&m);
    printf("nhap so cot    ");
    scanf("%d",&n);
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("\n nhap gia tri mang tai [%d][%d]    ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[100][100],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("[%d][%d]: %d\t",i,j,a[i][j]);
            if (j==n-1 && i<m-1)
            {
                printf("\n");
            }
        }
    }
}
void sapxepgiatritang(int x[100][100],int m, int n)
{
   int k= m*n;
    for (int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if (x[i/n][i%n]>x[j/n][j%n])
            {
                int tam = x[i/n][i%n];
                x[i/n][i%n]= x[j/n][j%n];
                x[j/n][j%n]=tam;
           
            }
        }
    }
}
void xoadong(int x[100][100],int &m,int n)
{
    int k;
    printf ("\n nhap dong muon xoa: ");
    scanf("%d",&k);
    if (k<0||k>n)
    {
        return;
    }
    for (int i=0;i<m;i++)
    {
        for(int j=k;j<n;j++)
        {
           x[k][i]=x[k+1][i];
        }
    }
    m--;
}
    
int main()
{
    nhapmang(a,m,n);
    xuatmang(a,m,n);
    printf("\n    ");
    sapxepgiatritang(a,m,n);
    xuatmang(a,m,n);
    xoadong(a,m,n);
    xuatmang(a,m,n);
}