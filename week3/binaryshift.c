#include<stdio.h>
unsigned int rightshift(unsigned int x,unsigned int n)
{
int i;
for(i=1;i<=n;i++)
{
   if(x%2==0)
   {
     x=x>>1;
   }
   else
   {
     x=x>>1;
     x=x+(1<<31);
   }
}
return x;
}
int main()
{
unsigned int x,n,result;
printf("enter x:");
scanf("%d",&x);
printf("\nenter how many times to shift:");
scanf("%u",&n);
result=rightshift(x,n);
printf("\nthe number after shifting is:%u",result);
return 0;
}
