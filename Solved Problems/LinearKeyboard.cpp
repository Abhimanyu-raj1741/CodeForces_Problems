#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	string k,s;
    	cin>>k>>s;
    	int arr[s.length()]={0};
    	for(int i=0;i<s.length();i++)
    	{    
    		for(int j=0;j<k.length();j++)
    		{
    			if(s[i]==k[j])
    			{
    				arr[i]=j+1;
    			}

    		}
    	}
    	int res=0;
    	for(int i =0;i<s.length();i++)
    	{   
    		if(s.length()==1)
    		{
    			res=0;
    			break;
    		}
    		int init=arr[0];
    		if(i<s.length()-1)
            res=res+abs(arr[i]-arr[i+1]);
             
    	}
    	cout<<res;
    	cout<<endl;

    }




	return 0;
}