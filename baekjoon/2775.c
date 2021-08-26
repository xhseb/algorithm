#include <stdio.h>
int		f(int i)
{
	if (i == 0)
		return (1);
	return (i * f(i - 1));
}

int		main(void)
{
	int		i;
	int		n;
	int		k;

	scanf("%d", &i);
	while (i)
	{
		scanf("%d", &n);
		scanf("%d", &k);
		if (n == 1)
			printf("1");
		else if (n == 2)
			printf("%d", k + 2);
		else
		{
			while (
			
		i -= 2;

