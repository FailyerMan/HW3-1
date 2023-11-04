#include <stdio.h>
#include <stdlib.h>

int num[3];

int max(int a, int b, int c)
{
    int max;
    for (int d = 0;d < 3;d++)
        if (num[d] > max)
            max = num[d];
    return max;
}

int main(void)
{
    printf("Enter three integers:");
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    printf("Maximum is: %d\n",max(num[0],num[1],num[2]));
    system("pause");
    return 0;
}