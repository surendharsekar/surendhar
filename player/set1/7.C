#include <stdio.h>

#include<string.h>

int main(void)

{

	char string[10];

	int i,temp,n;

	gets(string);

	n=strlen(string);

	if(n%2==0)

	{

		for(i=0;i<n;i+=2)

		{

			temp=string[i];

			string[i]=string[i+1];

			string[i+1]=temp;

		}

		puts(string);

	}

	else

	{
for(i=0;i<n-1;i+=2)

		{

			temp=string[i];

			string[i]=string[i+1];

			string[i+1]=temp;

		}

		puts(string);
}
return 0;

}
