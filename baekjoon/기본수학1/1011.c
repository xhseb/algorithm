#include <stdio.h>
#include <math.h>

int		main(void)
{
	int			T;
	int			x;
	int			y;
	int			i;
	long long	res;

	scanf("%d", &T);
	i = -1;
	while (++i < T)
	{
		scanf("%d %d", &x, &y);
		if (y - x == 1)
		{
			printf("1\n");
			continue ;
		}
		long long k;
		k = (int)sqrt(y - x);
		if (y - x == k * k)
			res = 2 * k - 1;
		else if (y - x > k * k + k)
			res = 2 * k + 1;
		else
			res = 2 * k;
		printf("%lld\n", res);
	}
	return (0);
}
