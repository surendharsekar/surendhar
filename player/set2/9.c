#include <stdio.h>

int main(void) 
{
	int num,i,j,flag=1;
	scanf("%d",&num);
	for(j=2;j<=num;j++)
	{
		if(num%j==0)
		{
		flag=1;
		for(i=2;i<=j/2;i++)
		{
		if(j%i==0)
			{
			flag=0;
			break;
		}
		}
		
	
	if(flag==1)
	{
		printf("%d ",j);
	}
		}
	}
	return 0;
}
