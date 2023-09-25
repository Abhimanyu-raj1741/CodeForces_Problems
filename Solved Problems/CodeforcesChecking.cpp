#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int flag=0;
    	string s="codeforces";
        char c;
        cin>>c;
        for(int i=0;i<s.length();i++)
        {
        	if(c==s[i])
        		flag=1;
        }
       if(flag)
       	cout<<"YES"<<endl;
       else 
       cout<<"NO"<<endl;
    }




	return 0;
}