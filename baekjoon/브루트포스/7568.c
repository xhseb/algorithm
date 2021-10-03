#include <stdio.h>

int     main(void)
{
    int     i;
    int     l;
    int     N;
    int     rank;
    int     arr[50][2];

    scanf("%d", &N);
    i = -1;
    while (++i < N)
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    i = -1;
    while (++i < N)
    {
        l = -1;
        rank = 1;
        while (++l < N)
        {
            if (arr[i][0] < arr[l][0] && arr[i][1] < arr[l][1])
                rank++;
        }
        printf("%d ", rank);
    }
    return (0);
}