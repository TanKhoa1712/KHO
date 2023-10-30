#include"stdio.h"
int nhap(int x[], int a)
{
    for (int i=0; i<a; i++)
    {
        printf("\nnhap phan tu thu [%d]: ",i);
        scanf("%d",&x[i]);
    }
}
int xuat( int x[],int a)
{
    for (int i =0; i<a; i++)
    {
        printf("\nphan tu thu [%d]: %d",i,x[i]);
    }
}
int timgiatri(int x[100],int a, int k)
{
    for (int i=0; i<a; i++)
    {
        if (x[i]==k)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
void xoagiatritai(int x[100],int &a,int g)
{

    for (int i=g; i<a-1; i++)
    {
        x[i]=x[i+1];
    }
    a--;
}
void giatricanxoa(int x[100], int &a)
{
    int gt;
    printf("nhap gia tri muon xoa");
    scanf("%d",&gt);
    for (int i =0; i<a; i++)
    {
        if (x[i]==gt)
        {
        xoagiatritai(x,a,i);
        }
    }
}
int main ()
{
    int a;
    printf("\nnhap so phan tu n: ");
    scanf("%d",&a);
    int b[a];
    nhap(b,a);
    xuat(b,a);
    //tim(b,a);
    giatricanxoa(b,a);
    xuat(b,a);
}