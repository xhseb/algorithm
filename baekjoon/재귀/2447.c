# include <stdio.h>
# include <math.h>

void	star(char **arr, int idx)
{
	int		i;
	int		j;

	i = -1;
	while (++i < idx)
	{
		j = -1;
		while (++j < idx)
			arr[i][j] = '*';
	} 
}
void	pivot(int n, int cnt)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				Blank((int)pow(3, cnt) + i * (int)pow(3, cnt + 1)),
					(int)pow(3, cnt) + j * (int)pow(3, cnt + 1), cnt)
			}
		}
		pivot(n / 3, cnt + 1);
			}
		}
	}
}
int		main(void)
{
	char 	arr[2187][2187];
	int		N;
	
	scanf("%d", &N);
	star(arr, N);
	blank();
}
