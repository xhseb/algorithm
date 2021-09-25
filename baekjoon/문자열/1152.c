#include <stdio.h>

int main(void)
{
	char str[1000000];
	int i,t=1,k=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		k++;
		if(str[i]==32)
			t++;
	}
	if(str[k-1]==32)
		t--;
	if(str[0]==32)
		t--;
	printf("%d",t);
	return 0;
}
