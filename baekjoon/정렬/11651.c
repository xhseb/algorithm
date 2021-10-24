#include <stdio.h>

int main(void)
{
    int     N;
    int     tmp;
    int     arr[100000][2];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i][1] > arr[j][1] || (arr[i][1] == arr[j][1] && arr[i][0] > arr[j][0]))
            {
                tmp = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = tmp;
                tmp = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = tmp;
            }
        }
    }
    for (int i = 0; i < N; i++)
        printf("%d %d\n", arr[i][0], arr[i][1]);
    return (0);
}
