#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
      int a,b,c,n;
      cin>>a>>b>>c>>n;
      int arr[3]={a,b,c};
      sort(arr,arr+3);
      int sum= (arr[2]-arr[0])+(arr[2]-arr[1]);
      if(n>=sum)
      {
      	n=n-abs(arr[2]-arr[0]);
      	n=n-abs(arr[2]-arr[1]);
      	
      	if(n>=0)
      	{
      		 if(n==0)
      		 	cout<<"YES"<<endl;
      		 else if(n%3==0)
      		 	cout<<"YES"<<endl;
      		 else 
      		 cout<<"NO"<<endl;
      	}

      }
      else
      {
      	cout<<"NO"<<endl;
      }
        

    }




	return 0;
}