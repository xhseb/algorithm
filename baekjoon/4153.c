#include <stdio.h>


int main(void)
{
	int		arr[3];
	int		tmp;

	while (1)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
			return (0);
		if (arr[0] < arr[1])
		{
			tmp = arr[1];
			arr[1] = arr[0];
			arr[0] = tmp;
		}
		if (arr[0] < arr[2])
		{
			tmp = arr[2];
			arr[2] = arr[0];
			arr[0] = tmp;
		}
		if ((arr[0] * arr[0]) == (arr[1] * arr[1]) + (arr[2] * arr[2]))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return (0);
}
