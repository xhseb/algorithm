#include <stdio.h>

int main(void)
{
	int arr[9];
	int i,max=0,z=0;
	for(i=0;i<9;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<9;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			z=i+1;
		}
	}
	printf("%d\n%d",max,z);
	return 0;
}
