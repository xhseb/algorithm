#include <stdio.h>

int main(void)
{
    int N;
    int num;
    int end, tmp, cnt = 0;

    scanf("%d", &N);
    num = 665;
    while (num++)
    {
        end = 0;
        tmp = num;
        while (tmp)
        {
            if (tmp % 10 == 6)
                end++;
            else
                end = 0;
            tmp /= 10;
            if (end == 3)
                break ;
        }
        if (end >= 3)
            cnt++;
        if (cnt == N)
            break;
    }
    printf("%d", num);
    return (0);
}