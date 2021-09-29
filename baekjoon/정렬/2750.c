#include <stdio.h>

int main(void)
{
    int     N;
    int     i;
    int     j;
    int     tmp;
    int     arr[1000];

    scanf("%d", &N);
    i = -1;
    while (++i < N)
        scanf("%d", &arr[i]);
    i = -1;
    tmp = N;
    while (++i < N)
    {
        j = -1;
        while (++j < N - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < N; ++i)
        printf("%d\n", arr[i]);
    return (0);
}