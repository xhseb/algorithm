#include <stdio.h>
int main(void)
{	
	int N,N1=0,N2,i=0;
	scanf("%d",&N);
	N2=N;
	while(1)
	{
		N1=(N2%10)*10+(N2%10+N2/10)%10;
		N2=N1;
		i++;
		if(N==N1)
			break;
	}
	printf("%d",i);
	return 0;
}
