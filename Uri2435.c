
#include<stdio.h>
int main()
{
   int a[100],b[100],c,x,i,j,temp, len;
   while(1)
   {
    scanf("%d",&a) ;
    if(a==0)
       break;
       for(i=0;i<100;i++)
       {


       len= sizeof a[100]/sizeof a[i];}
     for(i=0;i<len;i++)
       { for(j=i+1;j<len;j++)
         if(a[i]>a[j])
           {
           temp = a[i];
           a[i] = a[j];
           a[j]=temp;
               }
    }

    printf("%d\n",temp);

   }










}
