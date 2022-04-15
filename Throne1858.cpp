#include<iostream>
using namespace std;
int main()
{
      int a,b = 1,c,n,t,i,j;
        int x[100];
        cin>>n;
        for(i=0;i<n;i++)
        {
        	cin>>x[i];
        }

        c=x[0];
        for(i=1;i<n;i++) {
         if(x[i]<c)
         {
        	c=x[i];
        	b= i;
        	  }

         }
        cout<<b+1<<endl;

return 0;

}
