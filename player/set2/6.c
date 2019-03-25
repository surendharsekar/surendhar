#include <stdio.h>
int main()
{
	int a[10],x;
    int n,i,j,max=99,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
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
     if(count<=max)
      {
        max=count;
         x=a[i];
        }
    }
    printf("%d",x);
	return 0;
}
