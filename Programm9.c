#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d" ,&x);
    int a[x];
    int i;
    double SrAr=0;
    int z1=0;
    int k=0;
    for( i=0; i<x;   i++)
    {
    printf("a[%d]=" , i);
    scanf("%d", &a[i]);
    if (a[i]>0)
    {z1 = z1+a[i];
    k++;}
    }
    SrAr = z1/k;
    printf("%f" , SrAr);

    return 0;
}
