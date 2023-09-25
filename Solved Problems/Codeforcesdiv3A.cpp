#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int n,d;
    	int flag=0;
    	string s;
    	string k;
    	cin>>n>>d;
    	cin>>s;
    	if(d>s[0]-48)
    	{
    		cout<<char('0'+d)+s<<endl;
    	}
    	else if(d==0)
    	{
    		cout<<s+'0'<<endl;
    	}
    	else 
    	{  int i=0;
           

    	    int size=s.length();
            while(size--)
            {
            	if(s[i]-'0'<d)
            		break;
            		i++;
            }
            
             s.insert(i,to_string(d));
             cout<<s<<endl;
    	} 
    }
    



	return 0;
}