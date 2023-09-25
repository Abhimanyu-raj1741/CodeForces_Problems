#include<bits/stdc++.h>

using namespace std;

int main()
{

     int n;
        cin>>n;
    	int arr[12];
        for(int i=0;i<12;i++)cin>>arr[i];

        sort(arr,arr+12);
        int sum=0;
        int count=0;
        for(int i=11;i>=0;i--)
        {
        	if(n==0)
        	{
        		
        		break;
        	}
        	else if(arr[i]>n)
        		{   count=1;
        	        sum=arr[i];
        			break;
        		}
        	else 
        	{ 
        		if(sum==0)
        			{  count++;
        		       sum=arr[i];
        		     }
        		else 
                {
                	if(sum>=n)
                		break;
                	else {count++;
                	                	  sum+=arr[i];}
                }

        	}
        	
        }
        if(sum<n)
        	cout<<"-1"<<endl;
        else 
        cout<<count<<endl;
    




	return 0;
}