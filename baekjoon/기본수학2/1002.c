#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int		main(void)
{
	int		T;
	int		x1, x2, y1, y2;
	int		r1, r2;
	double	len;

	len = 0;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		len = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
		if (len == 0 && r1 == r2)
			printf("-1\n");
		else if (r1 + r2 < len)
			printf("0\n");
		else if (abs(r1 - r2) > len)
			printf("0\n");
		else if (len == (r1 + r2))
			printf("1\n");
		else if (len == abs(r1 - r2))
			printf("1\n");
		else
			printf("2\n");
	}
	return (0);
}
