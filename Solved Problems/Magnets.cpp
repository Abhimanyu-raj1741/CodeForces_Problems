#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin>>x;
    int count=0;
    int arr[x];
    for(int i=0;i<x;i++)
    {
    	int c;
    	cin>>c;
        arr[i]=c;

    }
  for(int i=0;i<x;i++)
  {
  	    if(arr[i]!=arr[i+1])
  	    { 
          count=count+1;
  	    }
  }
   
   cout<<count;
         

	return 0;
}