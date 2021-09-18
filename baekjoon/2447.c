#include <stdio.h>

void	star(int x, int y, int N)
{
	int		i;
	int		j;
	int		flag;

	if (x < N && y < N)
	{
		i = -1;
		flag = 0;
		if ((x>= N / 3 && x < N / 3 * 2) && (y>= N / 3 && y < N / 3 * 2))
		{
			flag = 1;
			printf(" ");
			star(++x, y, N);
		}
		else
		{
			while (++i < N / 3)
			{
				j = -1;
				while (++j < N / 3)
				{
					if ((x == 1 + 3 * i && y == 1 + 3 * j)/* || ((x>= i && x < 3 * i) && (y>= j && y < 3 * j))*/)
					{
						printf(" ");
						flag = 1;
						break;
						star(++x, y, N);
					}
				}
				if (flag == 1)
					break;
			}
			if (flag == 0)
				printf("*");
			star(++x, y, N);
		}
	}
	else if (x >= N && y < N)
	{
		x = 0;
		y++;
		printf("\n");
		star(x, y, N);
	}
	else if (y >= N)
		return ;
	return ;
}

int main(void)
{
	int		N;

	scanf("%d", &N);
	star(0, 0, N);
	return (0);
}
