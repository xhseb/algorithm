#include <stdio.h>

int main(void)
{
	int	N;
	int	M;
	int i;
	int l;
	int	j;
	int tmp;
	int arr[100];

	scanf("%d %d", &N, &M);
	i = -1;
	while (++i < N)
		scanf("%d", &arr[i]);
	i = -1;
	while (++i < N - 1)
	{
		l = i;
		while (++l < N)
		if (arr[i] > arr[l])
		{
			tmp = arr[l];
			arr[l] = arr[i];
			arr[i] = tmp;
		}
	}
	tmp = 0;
	while (i > 1)
	{
		if (arr[i] < M)
		{
			l = 1;
			while (i - l >= 0)
			{
				if (arr[i - l] + arr[i] < M)
				{
					j = 1;
					while (i - l - j >= 0)
					{
						if (arr[i - l - j] + arr[i - l] + arr[i] <= M)
						{
							if (tmp < arr[i - l - j] + arr[i - l] + arr[i])
								tmp = arr[i - l - j] + arr[i - l] + arr[i]; 
						}
						j++;
					}
				}
				l++;
			}
		}
		i--;
	}
	printf("%d", tmp);
	return (0);
}
