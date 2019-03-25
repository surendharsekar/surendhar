#include <stdio.h>
int main()
{
	int n,a[10],k,temp=0,i,j;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	    temp=a[n-1];
	    for(j=n-1;j>=0;j--)
	    {
	       a[j]=a[j-1];
	    }
	    a[0]=temp;
	}
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	
	return 0;
}
