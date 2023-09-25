#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    int count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
    	cin>>arr1[i];
    sort(arr,arr+n);
    sort(arr1,arr1+m);
   
    int l=max(n,m);
    int x=0,y=0;
    while(max(x,y)!=l)
    {      
          if(abs(arr[x]-arr1[y])<=1)
          { 
          	
          	count++;
          	x++;
          	y++;

          }
          else if(arr[x]>arr1[y])
          	y++;
          else if(arr[x]<arr1[y])
          	x++;
         
          
    }
   
   cout<<count;



	return 0;
}