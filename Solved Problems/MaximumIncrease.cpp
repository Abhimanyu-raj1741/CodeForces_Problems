#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    int count=0;
    int max=0;
    for(int i=0;i<n-1;i++)
    {
    	if(arr[i]<arr[i+1])
    	{
    		count++;
    		if(count>=max)
    			max=count;
    	}
    	else 
    	count=0;
    }
   cout<<max+1;



	return 0;
}