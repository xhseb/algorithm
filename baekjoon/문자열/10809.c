#include <stdio.h>

int main(void)
{
	char string[100]="";
	int i,j,flag;
	scanf("%s",string);
	for(i=97;i<123;i++) //아스키코드 a에서 z,어떤 알파벳을 찾을지 정하는 것
	{
		flag=0;
		for(j=0;string[j]!='\0';j++)
		{
			if((int)string[j]==i)
			{
				printf("%d ",j);
				flag=1;
				break;
			}
		}
		if(flag==0)
				printf("-1 ");
	}
	return 0;
}
