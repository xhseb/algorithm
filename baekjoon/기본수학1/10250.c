#include <stdio.h>
int main(void)
{
    int T,H,W,N,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d %d",&H,&W,&N);
		N-=1;
		printf("%d\n",(N%H+1)*100+(N/H+1));
	}
    return 0;
}
