#include <stdio.h>
int main(void)
{
	int arr[11000]={0};
	int i,s;
	for(i=1;i<=10000;i++)
	{
		if(0<i&&i<100)
		{
			s=i+i/10+i%10;
			arr[s]+=1;
		}
		else if(i<1000)
		{
			s=i+i/100+(i%100/10)+i%10;
			if(s<=10000)
				arr[s]+=1;
		}
		else
		{
			s=i+i/1000+(i%1000/100)+(i%1000%100/10)+i%10;
			arr[s]+=1;
		}

	}
	for(i=1;i<=10000;i++)
	{
		if(arr[i]==0)
			printf("%d\n",i);
	}
	return 0;
}
