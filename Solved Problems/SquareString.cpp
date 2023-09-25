#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {   int flag=0;
    	string s;
    	cin>>s;
    	if(s.length()%2==1)
    		cout<<"NO"<<endl;
    	else
    	{
    		 vector<char> v1;
    		 vector<char> v2;
    		 for(int i=0;i<s.length();i++)
    		 {
    		 	   if(i<s.length()/2)
    		 	   	v1.push_back(s[i]);
    		 	   else 
    		 	    v2.push_back(s[i]);
    		 }
    		 for(int i=0;i<s.length()/2;i++)
    		 {
                 if(v1[i]!=v2[i])
                 	{flag=1;
                     break ;}
    		 }
    		 if(flag)
    		 	cout<<"NO"<<endl;
    		 else 
    		    cout<<"YES"<<endl;;

    	}
    }



	return 0;
}