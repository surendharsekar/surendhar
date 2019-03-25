#include <stdio.h>
#include<string.h>
int main(void) {
	int i,n;
	char s[10],rev[10];
	scanf("%s",s);
	n=strlen(s);
	for(i=n;i>=0;i--)
  
{
	static x=0;
	rev[x]=s[i];
	x++;
	printf("%c",s[i]);
}
	return 0;
}
