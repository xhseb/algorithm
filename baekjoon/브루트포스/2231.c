#include <stdio.h>

int		main(void)
{
	int	N;
	int	digit = 0;
	int	tmp;
	int	num, sum;

	scanf("%d", &N);
	tmp = N;
	while (tmp)
	{
		tmp /= 10;
		digit++;
	}
	tmp = N;
	tmp -= digit * 9;
	while (tmp <= N)
	{
		sum = tmp;
		num = tmp;
		while (num)
		{
			sum += num % 10;
			num /= 10;
		}
		if (sum == N)
			break;
		sum = 0;
		tmp++;
	}
	if (tmp > N)
		printf("0");
	else
		printf("%d", tmp);
	return (0);
}
