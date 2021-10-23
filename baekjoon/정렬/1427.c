#include <stdio.h>

int main(void)
{
    int     N;
    int     pos;
    int     tmp;
    int     arr[10];

    scanf("%d", &N);

    pos = 0;
    tmp = N;
    while (tmp)
    {
        arr[pos] = tmp % 10;
        pos++;
        tmp /= 10;
    }
    for (int i = 0; i < pos; i++)
    {
        for (int j = i + 1; j < pos; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < pos; i++)
        printf("%d", arr[i]);
}