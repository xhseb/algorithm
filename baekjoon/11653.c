#include <stdio.h>

int	main(void)
{
	int		N;
	int		i;

	scanf("%d", &N);
	while (N != 1)
	{
		i = 1;
		while  (N % ++i != 0 && N >= i)
		;
		printf("%d\n", i);
		N = N / i;
	}
}
