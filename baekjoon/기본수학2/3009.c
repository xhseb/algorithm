#include <stdio.h>

int	main(void)
{
	int		x[3];
	int		y[3];
	int		ret_x;
	int		ret_y;

	scanf("%d %d %d %d %d %d", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);
	ret_x = x[0] - x[1] ? x[0] : 0;
	ret_y = y[0] - y[1] ? y[0] : 0;
	if (!ret_x)
		ret_x = x[2];
	else if (ret_x)
		ret_x = x[0] - x[2] ? x[0] : x[1];
	if (!ret_y)
		ret_y = y[2];
	else if (ret_y)
		ret_y = y[0] - y[2] ? y[0] : y[1];
	printf("%d %d", ret_x, ret_y);
	return (0);
}
