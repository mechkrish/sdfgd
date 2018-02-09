#include<stdio.h>
int main() 
{
int a,b,j;
printf("enter the two limits");
scanf("%d%d",&a,&b);
for(j=a;j<b;j++)
{
if((j)%2==0)
printf("%d\n",j);
}
}
