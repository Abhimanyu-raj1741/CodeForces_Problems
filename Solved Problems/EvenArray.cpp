#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int odd=0,even=0,fine=0;
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	for(int i=0;i<n;i++)
    	{
    		if(i%2==0)
    		{
    			if(arr[i]%2==0)
    				fine++;
    			else 
    			    odd++;

    		}
    		else 
    		{
    			if(arr[i]%2==1)
    				fine++;
    			else 
    			    even++;
    		}
    	}
    	if(n==fine)
    		cout<<"0";
        else if(odd==even)
        	cout<<even;
        else 
            cout<<"-1";
       
    cout<<endl;
    }




	return 0;
}