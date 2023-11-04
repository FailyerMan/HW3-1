#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int a = 1; a <= 20;a++)
    {
        printf("%10d",1+(rand()%6));
        if (a%5 == 0)
            printf("\n");
    }
    system("pause");
    return 0;
}