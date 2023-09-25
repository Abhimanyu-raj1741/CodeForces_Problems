#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    char x;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string v;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
    	{
    		continue;

    	}
       v.push_back(s[i]);
       
    	
    }
    for(int i=0;i<v.size();i++)
    {
    	if(i<v.size())
    	{
    		cout<<".";
    	}
    	cout<<v[i];
    }
    
  
       


	return 0;
    }
