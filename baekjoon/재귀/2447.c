# include <stdio.h>

void	star(char arr[2187][2187], int idx)
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

void	blank(char arr[2187][2187], int x, int y, int width)
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			arr[x + i][y + j] = ' ';
		}
	}
}

void	pivot(char arr[2187][2187], int N, int num)
{
	int		n;
	int		width;
	int		i =-1, j, tmp;

	if (num < 0)
		return ;
	width = 1;
	tmp = num;
	while (tmp--)
		width *= 3;
	n = N / 3 / width;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
		{
			blank(arr, width + 3 * width * i, width + 3 * width * j, width);
		}
	}
	pivot(arr, N, num - 1);
}

int		main(void)
{
	char 	arr[2187][2187];
	int		N;
	int		tmp;
	int 	num;


	scanf("%d", &N);
	star(arr, N);
	tmp = N;
	num = 0;
	while (tmp > 3)
	{
		tmp /= 3;
		num++;
	}
	pivot(arr, N, num);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%c", arr[i][j]);
		printf("\n");
	}
}
