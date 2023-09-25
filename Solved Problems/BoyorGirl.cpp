#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v(26,0);
    string s;
    int sum=0;
    int x=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
    	x=s[i]-97;
    	v[x]=1;

    } 
    for(auto i:v)
    {   int x=0;
        x=i;
        sum=sum+x;
        
    }
   if(sum%2==0)
   {
   	cout<<"CHAT WITH HER!";
   }
   else
   {
   	cout<<"IGNORE HIM!";
   }

	return 0;
}