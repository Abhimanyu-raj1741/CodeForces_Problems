#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	int arr1[n];
    	int j=0;
    	int k=n-1;
    	for(int i=0;i<n;i++)
    	{
    		if(i%2==0)
    		{
             arr1[i]=arr[j];
             j++;
    		}
    		else 
    		{
    			arr1[i]=arr[k];
    			k--;
    		}
    	}
    	for(int i=0;i<n;i++)
    		cout<<arr1[i]<<" ";
        cout<<endl;
    }




	return 0;
}