#include <stdio.h>

int	main(void)
{
	int		T;
	int		n;
	int		i;
	int		prime1;
	int		prime2;

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		prime1 = n / 2 + 1;
		prime2 = n / 2 - 1;
		while (--prime1 && ++prime2)
		{
			i = 1;
			while (++i < prime1)
			{
				if (prime1 % i == 0 || prime2 % i == 0)
					break ;
			}
			if (i == prime1)
			{
				while (prime1 != prime2 && ++i < prime2)
				{
					if (prime2 % i == 0)
						break;
				}
				if (i == prime2)
				{
					printf("%d %d\n", prime1, prime2);
					break ;
				}
			}
		}
	}
	return (0);
}
