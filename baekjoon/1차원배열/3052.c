#include <stdio.h>

int main(void)
{
	int arr[10],num[42]={0};
	int i,t=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>=42)
			arr[i]%=42;
	}
	for(i=0;i<10;i++)
		num[arr[i]]+=1;
	for(i=0;i<42;i++)
	{
		if(num[i]!=0)
			t++;
	}
	printf("%d",t);
	return 0;
}
