#include <stdio.h>
int main(void)
{
    int		i;
	int		s;
	int		N;
	
	s = 0;
	scanf("%d",&N);
	for(i=1;s<N;i++)
		s+=i;
	if(i%2==1)
		printf("%d/%d",i-s+N-1,s-N+1);
	else
		printf("%d/%d",s-N+1,i-s+N-1);
    return 0;
}
