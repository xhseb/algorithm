#include <stdio.h>

int     main(void)
{
    int     i;
    int     j;
    int     l;
    int     rank;
    int     cnt;
    int     N;
    int     *tmp;
    int     arr[50][3];

    scanf("%d", &N);
    i = -1;
    while (++i <N)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
        arr[i][2] = 0;
    }
    i = -1;
    rank = 1;
    while (++i < N)
    {
        if (arr[i][2] == 0)
        {
            tmp = arr[i];
            j = -1;
            cnt = 0;
            while (++j < N)
            {
                if (j == i || arr[j][2] != 0)
                    continue ;
                if (tmp[0] < arr[j][0] && tmp[1] < arr[j][1])
                {
                    if (tmp[2] != -1)
                        tmp[2] = 0;
                    tmp = arr[j];
                    tmp[2] = rank;
                    l = -1;
                    while (++l < N)
                    {
                        if (arr[l][2] == -1)
                            arr[l][2] = 0;
                    }
                    cnt = 0;
                }
                else if (!(tmp[0] > arr[j][0] && tmp[1] > arr[j][1]))
                {
                    tmp[2] = -1;
                    arr[j][2] = -1;
                    cnt++;
                }
            }
            l = -1;
                while (++l < N)
                {
                    if (arr[l][2] == -1)
                        arr[l][2] = rank;
                }
            rank = rank + cnt + 1;
        }
    }
    i = -1;
    while (++i < N)
    {
        if (i == N - 1)
            rank--;
        if (arr[i][2] == 0)
            arr[i][2] = rank;
    }
    i = -1;
    while (++i < N)
        printf("%d ", arr[i][2]);
    return (0);
}