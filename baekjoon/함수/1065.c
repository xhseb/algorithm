#include <stdio.h>
int main(void)
{
	int i,n,h=0,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(0<i&&i<100)
			h++;
		else
		{
			a=i/100;
			b=i%100/10;
			c=i%10;
			if((b-a)==(c-b))
				h++;
		}
	}
	printf("%d",h);
	return 0;
}
