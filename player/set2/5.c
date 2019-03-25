#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],x;
    int i,j,n,max=0,count=0;
    scanf("%[^\t\n]s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        count=1;
        if(a[i]=='+')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
           {
       count++;
       a[j]='+';
         }
        }
     if(count>=max)
        {
    max=count;
    x=a[i];
        }
    }
    printf("%c-%d",x,max);
    
	return 0;
}
