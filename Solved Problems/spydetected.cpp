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
    	int a[n];
    	int rept=0;
    	int index=0;

    	for(int i=0;i<n;i++)
    	{   
    		cin>>a[i];
    	}
    	if(n==3 && a[0]==a[2])
    	{
    		
    			cout<<"2"<<endl;
    			
    		
    	}
    	else {
        for(int i=0;i<n-1;i++ )
        {
        	if(a[i]==a[i+1])
        	{   
                 rept=a[i];
                
                 break;
        	}
        }
        for(int i=0;i<n;i++)
        {
        	if(rept!=a[i])
        		{
        		    cout<<i+1<<endl;
        		    break;
        		}
        }
    }
        
    }




	return 0;
}