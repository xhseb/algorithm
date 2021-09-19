#include <stdio.h>

int	ft_recursive(int *ret, int i, int dep)
{
	int t;

	t = -1;
	if (i < dep)
	{
		while (++t < 10)
		{
			*ret += t;
			ft_recursive(ret, i, dep);
		}
	}
	if (i == dep)
	{
		if (N == ret)
		{
			printf("%d", 
	return (0);
}
int main(void)
{
	int	N;
	int	i;
	int	ret;

	scanf("%d", &N);
	i = 1;
	while (N =/ 10)
		i++;
	ret = 0;
	printf("%d", ft_recursive(&ret, 0, i));
	return (0);
}
