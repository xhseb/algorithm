#include <stdio.h>

int main(void)
{
	int i,l,t,a=0,total=0;
	char str[80]={0};

	scanf("%d",&i);
	for(l=0;l<i;l++)
	{
		scanf("%s",str);
		a=0,total=0;
		for(t=0;t<80;t++)
		{
			if(str[t]=='O')
			{
				a+=1;
				total+=a;
			}
			else if(str[t]=='X')
			{
				a=0;
			}
			else
				break;
		}
		printf("%d\n",total);
	}
	return 0;
}
