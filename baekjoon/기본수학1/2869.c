#include <stdio.h>
int main(void)
{
    int v,a,b,i;
	scanf("%d %d %d",&a,&b,&v);
	i=(v-a)/(a-b);
	if((v-a)%(a-b)!=0)
		i+=1;
	printf("%d",i+1);
    return 0;
}
