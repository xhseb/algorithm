#include <stdio.h>

int main(void)
{
	char str[100]; int i,total=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		total++;
		if(str[i]=='j'&&(str[i-1]=='n'||str[i-1]=='l'))
			total--;
		else if(str[i]=='-'||str[i]=='=')
		{
			total--;
			if(str[i-1]=='z'&&str[i-2]=='d')
				total--;
		}
	}
	printf("%d",total);
	return 0;
}
