#include <stdio.h>

int main (void)
{
    int a,b,c,total,i,l,t=1;
	int arr[10]={0,0,0,0,0};
    scanf("%d %d %d",&a,&b,&c);
    total=a*b*c;
    for(i=0;i<10;i++)
	{
		for(l=1;l<10;l++)
		{
			t*=10;
			if((total%t)/(t/10)==i)
				arr[i]++;
		}
		t=1;
	}
	if(total>=1000000&&total<=9999999)
		arr[0]-=2;
	if(total>=10000000&&total<=99999999)
		arr[0]--;
	for(i=0;i<10;i++)
		printf("%d\n",arr[i]);
	return 0;
}
