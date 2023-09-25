#include<bits/stdc++.h>

using namespace std;

int main()
{

     int  n;
     cin>>n;
     int arr[n];
     int eflag=0;
     int oflag=0;
     int index=0;
     for(int i=0;i<n;i++)
     {
     	int x;
     	cin>>x;
     	arr[i]=x;
     	if(arr[i]%2==0)
     	{
     		eflag++;
     	}
     	else 
     	{
     		oflag++;
     	}

     }
      for(int i=0;i<n;i++)
      {
      	if(eflag>=2)
      	{
            if(arr[i]%2==1)
            	index=i;
      	}
      	else 
      	{
      		if(arr[i]%2==0)
            	index=i;
      	}
      }
       cout<<index+1;


	return 0;
}