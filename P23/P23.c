#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {Continue,Won,Lost};
int rolldice(void);

int main(void)
{
    int sum, mp;
    enum Status gs;

    srand(time(NULL));
    sum = rolldice();

    switch (sum)
    {
        case 7:
        case 11:
            gs = Won;
            break;
        case 2:
        case 3:
        case 12:
            gs = Lost;
            break;
        default:
            gs = Continue;
            mp = sum;
            printf("Point is %d\n",mp);
            break;
    }

    while (gs == Continue)
    {
        sum = rolldice();
        if (sum == mp)
            gs = Won;
        else    
            if (sum == 7)
                gs = Lost;
    }

    if (gs == Won)
        printf("Player Wins\n");
    else
        printf("Player Loses\n");
    system("pause");
    return 0;
}

int rolldice(void)
{
    int die1, die2, worksum;
    die1 = 1+(rand()%6);
    die2 = 1+(rand()%6);
    worksum = die1 + die2;

    printf("Player rolled %d + %d = %d\n",die1, die2, worksum);
    return worksum;
}