#include <stdio.h>
#include <stdlib.h>

long factorial(long num)
{
    if (num <= 1)
        return 1;
    else
        return (num * factorial(num-1));
}

int main(void)
{
    for (int i = 0;i <= 10;i++)
    {
        printf("%2d! = %1d\n", i, factorial(i));
    }
    system("pause");
    return 0;
}