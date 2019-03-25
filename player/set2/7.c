#include<stdio.h>
#include<string.h>
int main() 
{
    char a[10];
    char str[]="kabali";
    int i,j,temp=0,n,n1,k=0,l,count=0;
    n=strlen(str);
    scanf("%d",&n1);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
        }
    }
   while(k<n1)
   {
    scanf("%s",a);
    len=strlen(a);
     if(n==l)
       {
        for(i=0;i<n;i++)
           {
            for(j=i+1;j<n;j++)
               {
                   if(a[i]>a[j])
                   {
                  temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
             }
               }
           }
           if(strcmp(str,a)==0)
           {
               count++;
           }
       }k++;
   }
   printf("%d",count);
	return 0;
}
