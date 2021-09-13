#include <stdio.h>

int     main(void)
{
	int     n;
	int     i;
	int     l;
	int		t;
	int		count;

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			return (0);
		l = 2;
		while (2 * n >= l * l)
			l++;
		i = n;
		count = 0;
		while (++i <= 2 * n)
		{
			t = 2;
			while (t <= l && t < i)
			{
				if (i % t == 0)
					break;
				t++;
			}
			if ((t >= i || t > l || i == 2) && i != 1)
				count++;
		}
		printf("%d\n", count);
	}
	return (0);
}
