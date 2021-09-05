#include <stdio.h>

int		main(void)
{
	char 	A[10002];
	char	B[10002];
	int		i;
	int		dec;
	int		len_A;
	int		len_B;
	int		len;
	int		ret[10003];

	scanf("%s %s", A, B);
	len_A = 0;
	len_B = 0;
	while (*(A + len_A))
		len_A++;
	while (*(B + len_B))
		len_B++;
	len = len_A > len_B ? len_A : len_B;
	i = 0;
	dec = 0;
	while (len--)
	{
		ret[i] = *(A + --len_A) + *(B + --len_B) - 2 * '0' + dec;
		if (!*(A + len_A) || !*(B + len_B))
			ret[i] += '0';
		if (ret[i] >= 10)
		{
			dec = 1;
			ret[i] -= 10;
		}
		else
			dec = 0;
		i++;
	}
	if (dec == 1)
		printf("1");
	while (i--)
		printf("%d", ret[i]);
	printf("\n");
}
