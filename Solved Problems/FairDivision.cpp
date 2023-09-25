#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
      int x;
      cin>>x;
      int arr[x];
      int sum=0,count1=0,count2=0;

      for(int i=0;i<x;i++)
      {   
      	 cin>>arr[i];
         sum+=arr[i];
         if(arr[i]==1)
         	count1++;
         else 
            count2++;
      }
       
      // cout<<sum<<" "<<count1<<count2<<endl;
      if(sum%2==1)
      	 	cout<<"NO"<<endl;
     
      else if(sum==x*2)
      {
        if(x%2==0)
        	cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
      }
      else 
      {
         if(count2%2==1)
         {
         	if(count1%2==0)
         		cout<<"YES"<<endl;
         	else 
         	   cout<<"NO"<<endl;
         }
         else
         {
         	cout<<"YES"<<endl;
         }
      }

    }




	return 0;
}