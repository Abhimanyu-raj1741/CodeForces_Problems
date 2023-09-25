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
    	string s;
    	cin>>s;
    	int max=0;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]-96>max)
    			max=s[i]-96;
    	}
    	cout<<max<<endl;
    }


   

	return 0;
}