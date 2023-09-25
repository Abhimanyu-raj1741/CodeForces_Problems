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
    	string s1,s2;
    	cin>>s1>>s2;
    	string m1,m2;
    	for(int i=0;i<2;i++)
    	{
    		for(int j=0;j<s1.length();j++)
    		{
    			if(i==0)
    			{
    				if(s1[j]=='R')
    					m1.push_back('1');
    				else 
    				    m1.push_back('2');
    			}
    			else 
    			{
    				if(s2[j]=='R')
    						m2.push_back('1');
    				else 
    				    m2.push_back('2');
    			}

    		}
    	}
    	 if(m1==m2)
    	 	cout<<"YES"<<endl;
    	 else 
    	   cout<<"NO"<<endl;
    }
   



	return 0;
}