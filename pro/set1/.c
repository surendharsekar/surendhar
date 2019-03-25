#include <stdio.h>
#include<string.h>
int main()
{
	int a1,b1,max=0,i;
	char a[100],b[100];
	printf("\nEnter the first string:  ");
	scanf("%s",a);
  
	printf("\nEnter the second string:  ");
	scanf("%s",b);
	a1=strlen(a);
	b1=strlen(b);
  
	if(a1>b1)
	{
		max=a1;
	}
	else
	{
		max=b1;
	}
	for(i=0;i<max;i++)
	{
		if(a[i]==b[i])
		{
			printf("%c",a[i]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
