#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	int light=0;
    	if(n==1 && m==1)
    		light=1;
    	else 
    	{
           if(n%2==0 && m%2==0)
           	  light=((m/2)*n);
           else if(n%2==1 && m%2==0)
           {
                 light=n*m/2;
           }
           else if(m%2==1)
           {
           	if(n%2==0)
           	{
           		light=n/2+((m/2)*n);
           	}
           	else 
           	{
           		light=(n/2)+1+((m/2)*n);
           	}
           }
    	}
    	 cout<<light<<endl;
    }
 



	return 0;
}