#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int upper_c=0;
     int  lower_c=0;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]>96)
    	{
    		lower_c++;
    	}
    	else if(s[i]>64 && s[i]<=90)
    	{
    		upper_c++;
    	}
    }
    if(upper_c>lower_c)
    {
    	transform(s.begin(),s.end(),s.begin(),::toupper);
    	cout<<s;
    }
    else
    {
    	transform(s.begin(),s.end(),s.begin(),::tolower);
    	cout<<s;
    }




	return 0;
}