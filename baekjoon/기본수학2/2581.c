#include <stdio.h>

int     main(void)
{
    int     M;
    int     N;
    int     i;
    int     l;
    int     j;
    int     min;
    int     sum;

    scanf("%d %d", &M, &N);
    i = M - 1;
    sum = 0;
    min = 0;
    while (++i <= N)
    {
        if (i <= 1)
            continue;
		l = 2;
    	while (i >= l * l)
        l++;
        while (l >= 2)
        {
            if (i % l == 0)
                break;
            l--;
        }
        if (l == 1 || i == 2)
        {
            if (sum == 0)
                min = i;
            sum += i;
        }
    }
    if (sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
    return (0);
}
