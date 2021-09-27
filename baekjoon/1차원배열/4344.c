#include <stdio.h>

int main(void)
{
	int i,l,t,k,high=0;
	float total=0;
	int score[1000];
	scanf("%d",&i);
	for(t=0;t<i;t++)
	{
		high=0,total=0;
		scanf("%d",&l);
		for(k=0;k<l;k++)
		{
			scanf("%d",&score[k]);
			total+=score[k];
		}
		for(k=0;k<l;k++)
		{
			if((float)total/l<score[k])
				high+=1;
		}
		printf("%.3f%%\n",(float)high/l*100);
	}
	return 0;
}
