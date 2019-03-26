#include <stdio.h>
int main()
{
int a[2],b[2],c[2],flag=0,i;
for(i=0;i<2;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<2;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<2;i++)
{
if(a[i]==b[i] && b[i]==c[i])
{
flag=1;
}
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
