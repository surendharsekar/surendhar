#include <stdio.h>

int main(void) 
{
	int l,r,len,i;
	scanf("%d %d",&l,&r);
	if(l>r)
	{
len=l;
	}
	else
	{
	len=r;
	}
	for(i=2;i<=len;i++)
	{
	if((i%l==0) && (i%r==0))
		{
		printf("%d",i);
		break;
		}
	}
