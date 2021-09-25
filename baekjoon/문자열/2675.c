#include <stdio.h>

int main(void)
{
	char string[20];
	int t,s,r,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&r);
		scanf("%s",string);
		for(s=0;string[s]!='\0';s++)
		{
			for(j=0;j<r;j++)
				printf("%c",string[s]);
		}
		printf("\n");
	}
	return 0;
}
