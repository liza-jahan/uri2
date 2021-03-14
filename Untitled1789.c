#include<stdio.h>
int main()
{
  int a,b,c,d,x=0,n=0,y=0;

   while(scanf("%d",&a)!=EOF)
   {
       x=0;
    for(int i=1 ;i<=a;i++)
    {
       scanf("%d",&b);
       if(b>x)
        x =b;}

       if( x<10)
        n=1;
       else if( x>=20)
       n=3;
       else
       n=2;
    printf("%d\n",n);

}}




