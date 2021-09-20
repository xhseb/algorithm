#include <stdio.h>

int main(void)
{
	int		x;
	int		y;
	int		w;
	int		h;
	int		min1;
	int		min2;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	min1 = w- x < h - y ?  w - x : h - y;
	min2 = x < y ? x : y;
	min1 = min1 < min2 ? min1 : min2;
	printf("%d", min1);
	return (0);
}
