#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	int r=0,g=0,b=0;
    	int flag=0;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]=='r')
    			r=1;
    		else if(s[i]=='g')
    			g=1;
    		else if(s[i]=='b')
    			b=1;
    		else if(s[i]=='R')
    		{
    			if(r-1==0)
    			{
    				flag++;
    			}
    			else {
    				cout<<"NO"<<endl;
    				break;
    			}

    		}
    		else if(s[i]=='G')
    		{
    			if(g-1==0)
    			{
    				flag++;
    			}
    			else {
    				cout<<"NO"<<endl;
    				break;
    			}

    		}
    		else if(s[i]=='B')
    		{
    			if(b-1==0)
    			{
    				flag++;
    			}
    			else {
    				cout<<"NO"<<endl;
    				break;
    			}

    		}
    	}
    	if(flag==3)
    		cout<<"YES"<<endl;
    	
   }


	return 0;
}