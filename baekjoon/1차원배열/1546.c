#include <stdio.h>

int main(void)
{
	int n,i;
	float total=0,temp,max;
	float score[1000];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&score[i]);
	}

	for(i=1;i<n;i++)
	{
		if(score[0]<score[i])
		{
			temp=score[0];
			score[0]=score[i];
			score[i]=temp;
		}
	}
	max=score[0];
	for(i=0;i<n;i++)
	{
		score[i]=score[i]/max*100;
		total+=score[i];
	}
	printf("%f",total/(float)n);
	return 0;
}
