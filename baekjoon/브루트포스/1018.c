#include <stdio.h>

int     main(void)
{
    int     N, M;
    int     tmp;
    int     cnt;
    int     color;
    char     board[50][50];

    scanf("%d %d\n", &N, &M);
    for (int i = 0; i < N; i++)
    {
        for (int l = 0; l < M; l++)
            scanf("%c", &board[i][l]);
        if (i != N - 1)
            scanf("\n");
    }
    cnt = 64;
    for (int i = 0; i < N - 7; i++)
    {
        for (int l = 0; l < N - 7; l++)
        {
            tmp = 0;
            color = board[i][l];
            for (int x = 0; x < 8; x++)
            {
                for (int y = 0; y < 8; y++)
                {
                    if (x % 2 == y % 2)
                    {
                        if (board[i + x][l + y] != color)
                            tmp++;
                    }
                    else
                    {
                        if (board[i + x][l + y] == color)
                            tmp++;
                    }
                }
            }
            printf("tmp : %d\n", tmp);
            if (tmp < cnt)
                cnt = tmp;
        }
    }
    printf("%d", cnt);
    return (0);
}