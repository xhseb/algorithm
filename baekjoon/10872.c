#include <stdio.h>

int	factorial(int N, int ret)
{
	if (N == 0)
		return (ret);
	ret *= N;
	return (factorial(N - 1, ret));
}

int	main(void)
{
	int		N;
	int		ret;

	scanf("%d", &N);
	ret = 1;
	printf("%d", factorial(N, ret));
	return (0);
}
