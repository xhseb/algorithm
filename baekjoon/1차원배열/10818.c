#include <stdio.h>

int main(void)
{
	int N,i,max=-1000000,min=1000000;
	int arr[1000000];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<N;i++)
	{
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	printf("%d %d",min,max);
	return 0;
}
