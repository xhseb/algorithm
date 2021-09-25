#include <stdio.h>

int main(void)
{
	int i,t,total=0;
	char arr[100];
	scanf("%d %s",&i,arr);
	for(t=0;t<i;t++)
		total+=arr[t]-'0';
	printf("%d",total);
	return 0;
}
