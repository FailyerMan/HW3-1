#include <stdio.h>
#include <stdlib.h>

double Power(double a, int b)
{
    double total = 1;
    for (int i = 1;i <= b;i++)
    {
        total = total*a;
    }
    return total;
}

int main(void)
{
    int k;
    double ans;
    printf("計算3.5的k次方?請輸入k=");
    scanf("%d",&k);
    ans = Power(3.5,k);
    printf("3.5的%d次方=%lf\n",k,ans);
    system("pause");
    return 0;
}