#include<bits/stdc++.h>

using namespace std;

int main()
{
   
   int t;
   cin>>t;
   while(t--)
   {  int flag=0;
     long long int n;
      cin>>n;
       if(n%2!=0)
        cout<<"YES"<<endl;
       	else 
       	{
       		int flag=0;
       		while(n>=1)
       		{
       			n=n/2;
       			if(n%2!=0 && n!=1)
       			{
       				flag=1;
       				break;
       			}
       		}
       		if(flag)
       			cout<<"YES"<<endl;
       		else 
       		cout<<"NO"<<endl;
       	}
      


   }




	return 0;
}