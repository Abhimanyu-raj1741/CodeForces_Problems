#include<bits/stdc++.h>

using namespace std;

int main()
{
   int x;
   cin>>x;
   int count=1;
   int arr[x];
   int max_count=0;
   for(int i=0;i<x;i++)
   {
   	  int y;
   	  cin>>y;
   	  arr[i]=y;
   }
   if(x==1)
       {
         max_count=1;
         
       }
    
   for(int j=0;j<x-1;j++)
   {   
       
       if(arr[j]<=arr[j+1])
       {
         count=count+1;
         
       }
       if(count>max_count)
       {
         max_count=count;
       }
       if(arr[j]>arr[j+1])
       {
         count=1;
       }
       
   }
    cout<<max_count;


	return 0;
}