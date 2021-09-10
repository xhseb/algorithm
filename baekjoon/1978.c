#include <stdio.h>

int		main(void)
{
	int		N;
	int		i;
	int		l;
	int		prime;
	int		arr[101];

	scanf("%d", &N);
	i = 0;
	while (N--)
		scanf("%d", &arr[i++]);
	prime = 0;
	while (--i >= 0)
	{
		if (arr[i] <= 1)
			continue;
		l = 2;
		while (arr[i] >= l * l)
			l++;
		while (l >= 2)
		{
			if (arr[i] % l == 0)
				break;
			l--;
		}
		if (l == 1 || arr[i] == 2)
			prime++;
	}
	printf("%d", prime);
	return (0);
}
