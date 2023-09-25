#include<bits/stdc++.h>

using namespace std;

int main()
{

    float n,m,a,b;
    cin>>n>>m>>a>>b;
    int rcost=0;
    int scost=a*n;
    int ccost=ceil(n/m)*b;
    while(n)
    {
    	if(b/m<a && n>m)
    	{   
            rcost=rcost+b;
    		n=n-m;
    	}
    	
    
    	else 
    	{
    		rcost=rcost+a;
    		n--;
    	}
    }
     int arr[3]={rcost,ccost,scost};
     sort(arr,arr+3);
     cout<<arr[0]<<endl;
     


	return 0;
}
  //  Test Case 
  //    Input:10 2 1 1
  //    output:5