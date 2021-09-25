#include <stdio.h>
int main() {
  int i,j,t,total=0,flag;
  char arr[100];
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
	  int alp[26]={0};
	  scanf("%s",arr);
	  for(j=0;arr[j]!='\0';j++)
	  {
		  flag=1;
		  if(alp[(int)arr[j]-97]!=0&&alp[(int)arr[j]-97]!=j)
		  {
			  flag=0;
			  break;
		  }
		  alp[(int)arr[j]-97]=j+1;
		  temp=j+1;
	  }
	  total+=flag;
  }
  printf("%d",total);
			  
  return 0;
}
