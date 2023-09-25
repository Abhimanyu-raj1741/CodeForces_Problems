#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {   int n;
        cin>>n;
    	int arr[n];
    	int arr1[50]={0};
    	vector<int> v;
    	for(int i=0;i<2*n;i++)
    	{
    		cin>>arr[i];
    	}

        
           v.push_back(arr[0]);
             arr1[arr[0]]++;
            for(int i=0;i<2*n;i++)
            {
            	for(int j=0;j<50;j++)
            	{
            		if(arr1[arr[i]]==0)
            		{
            			v.push_back(arr[i]);
            			arr1[arr[i]]++;
            		}
            	}
            } 
        
           
           
    	for(int i=0;i<n;i++)
    	  cout<<v[i]<<" "; 
        

    	

    	cout<<endl;
    }




	return 0;
}