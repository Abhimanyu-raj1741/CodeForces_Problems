#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++)
    {  
    	if(i==0){
    	if(s[i]-97>13)
    	{
    		int num=(s[i]-97)-13;
    		cerr<<13-num<<endl;
    		count+=13-num;
    	}
    	else 
    	{
    		cerr<<s[i]-97<<endl;
    		count+=s[i]-97;
    	}
        } 
        else 
        {
            
            if(abs(s[i-1]-s[i])>13)
            {
            	int rum=26-abs(s[i-1]-s[i]);
               cerr<<rum<<endl;
               count+=rum;
            }
            else 
            {
               int tum=abs(s[i-1]-s[i]);
               cerr<<tum<<endl;
               count+=tum;
            }
            
        }
    }


   cout<<count<<endl;

	return 0;
}