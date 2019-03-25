#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i;
	scanf("%[^\t\n]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
    {
        if(a[0]>90)
        {
            a[0]=a[0]-32;
        }
        else if(a[i]==' ')
        {
            if(a[i+1]>90)
          {
             a[i+1]=a[i+1]-32;
          }
        }
   }
    printf("%s",a);
    return 0;
}
