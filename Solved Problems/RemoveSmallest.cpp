#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int n,flag=0;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
       	cin>>arr[i];
       }
       sort(arr,arr+n);
       for(int i=0;i<n;i++)
       {
       	  if(arr[i+1]-arr[i]>1 && i<n-1)
       	  	{
              flag=1;


       	  	}
         
       }
       if(flag==0)
        cout<<"YES"<<endl;
       else 
       cout<<"NO"<<endl;


    }




	return 0;
}