#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    { 
    	long long int count =0;
    	long long int a,b;
    	cin>>a>>b;
    	if(a==b)
    	  cout<<"0"<<endl;
    	else if(a<b)
    	{
           count=(b-a)/10;
           if((b-a)%10==0)
           cout<<count<<endl;
           else
           {
           	cout<<count+1<<endl;
           }
    	}
       else 
       {
       	    count=(a-b)/10;
       	   
       	    if((b-a)%10==0)
           cout<<count<<endl;
           else
           {
           	cout<<count+1<<endl;
           }
       }

    }
 


	return 0;
}