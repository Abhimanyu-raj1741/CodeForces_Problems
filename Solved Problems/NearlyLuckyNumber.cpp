#include<bits/stdc++.h>

using namespace std;


int main()
{   

    int flag=0;
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='4' ||  s[i]=='7')
    	{
    		
    		count=count+1;
    	}
    	if(s[i]!=4 && s[i]!=7)
    	{
    		flag=0;
    	}
    }
  
  if(count==4 && s.length()>1 || count==7)
  {
  	cout<<"YES";
  }
  else 
  {
  	cout<<"NO";
  }


	return 0;
}