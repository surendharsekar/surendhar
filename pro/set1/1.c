#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],i,j,v,t,k;
  
    scanf("%d",&v);
    scanf("%d",&k);
    for(i=0;i<v;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<v;i++)
    {
        for(j=i+1;j<v;j++)
        if(a[i]>a[j])
        
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    for(i=0;i<k-1;i++)
   printf("%d ",a[i]);
}
