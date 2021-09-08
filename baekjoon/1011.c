#include <stdio.h>

int		main(void)
{
	int		T;
	int		x;
	int		y;
	int		dis;
	int		move;

	scanf("%d",&T);
	while (T--)
	{
		scanf("%d %d", &x, &y);
		dis = y - x;
		if (dis == 1)
			printf("1\n");
		move = 1;
		while (dis - move * 2 > 0)
		{
			dis = dis - move * 2;
			move++;
		}
		if (move >= dis)
			printf("%d\n", move + 1);
		else if (move * 2 >= dis)
			printf("%d\n", move + 2);
	}
	return (0);
}
