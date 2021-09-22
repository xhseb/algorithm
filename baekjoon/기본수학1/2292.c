#include <stdio.h>
int main(void)
{
    int N,i,total=0;
    scanf("%d",&N);
    for(i=0;;i++)
    {
       total+=i;
	   if(N<=6*total+1)
		   break;
	}
    printf("%d",i+1);
    return 0;
}
