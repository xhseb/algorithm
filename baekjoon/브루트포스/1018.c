#include <stdio.h>

int     main(void)
{
    int     N, M;
    int     tmp_A;
	int		tmp_B;
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
        for (int l = 0; l < M - 7; l++)
        {
            tmp_A = 0;
			tmp_B = 0;
            color = board[i][l];
            for (int x = 0; x < 8; x++)
            {
                for (int y = 0; y < 8; y++)
                {
                    if (x % 2 == y % 2)
                    {
                        if (board[i + x][l + y] != color)
                            tmp_A++;
						else
							tmp_B++;
                    }
                    else
                    {
                        if (board[i + x][l + y] == color)
                            tmp_A++;
						else
							tmp_B++;
                    }
                }
            }
            if (tmp_A < tmp_B)
                cnt = cnt < tmp_A ? cnt : tmp_A;
			else
				cnt = cnt < tmp_B ? cnt : tmp_B;
        }
    }
    printf("%d", cnt);
    return (0);
}
