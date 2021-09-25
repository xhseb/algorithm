#include <stdio.h>

int main(void)
{
	char str[1000000];
	int alp[26]={0};
	int i,temp,n=0,k=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>96)
			str[i]-=32;
		alp[str[i]-65]+=1;
	}
	temp=alp[0];
	for(i=1;i<26;i++)
	{
		if(temp<alp[i])
		{
			temp=alp[i];
			k=i;
			n=0;
		}
		else if(temp==alp[i])
			n=-1;
	}
	if(n==-1)
		printf("?");
	else if(temp==alp[0])
		printf("%c",65);
	else
		printf("%c",(k+65));
	return 0;
}
