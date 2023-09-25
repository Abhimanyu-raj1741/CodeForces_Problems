#include<bits/stdc++.h>

#define int long long int
#define F first
#define S seond
#define pb push_back

using namespace std;

int32_t main()     //int32_t converting Longlong int to 32bit
{

    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int x=n;
      int a=1,b=n,c=1;
      for(int i=2;i<=n;i++)
      {
      	if(n%i==0)
      	{
      		a=i;
      		break;

      	}
      }
       n=n/a;

       for(int i=2;i<=n;i++)
       { 

       	if(n%i==0)
       	{  
       		if(i!=a)
       
       		b=min(b,i);
             
       	       		if((n%i)!=i)
       	       		{  if((n/i)!=a)
       	       			b=min(b,n/i);
       	       		}
       	}

       }
     c=n/b;
     
      if(a!=b && b!=c && a!=c && c>1) 
    	{
    		cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
    	}   
       else 
       cout<<"NO"<<endl;
    }
   

	return 0;
}