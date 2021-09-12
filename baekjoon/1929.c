#include <stdio.h>

int     main(void)
{
    int     M;
    int     N;
    int     i;
    int     l;

    scanf("%d %d", &M, &N);
    i = M - 1;
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
			printf("%d\n", i);
    }
    return (0);
}
