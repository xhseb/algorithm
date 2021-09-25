#include <stdio.h>

int main(void)
{
	char str[15]; int i,total=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='S') 
			str[i]=8;
		else if(str[i]=='V') 
			str[i]=9;
		else 
			str[i]=((str[i]-65)/3)+3;
		if(str[i]==11)
			str[i]--;
		total+=str[i];
	}
	printf("%d",total);

	return 0;
}
