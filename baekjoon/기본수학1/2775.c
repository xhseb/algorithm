#include <stdio.h>

int		main(void)
{
	int		t;
	int		k;
	int		n;
	int		i;
	int		j;
	int		arr[1024][15];

	scanf("%d", &t);
	i = -1;
	while (++i <  14)
		arr[0][i] = i + 1;
	while (t--)
	{
		scanf("%d %d", &k, &n);
		i = -1;
		while (++i <= k)
			arr[i][0] = 1;
		i = 0;
		while (i++ < k)
		{
			j = 0;
			while (j++ < n)
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
		printf("%d\n", arr[k][n - 1]);
	}
}
