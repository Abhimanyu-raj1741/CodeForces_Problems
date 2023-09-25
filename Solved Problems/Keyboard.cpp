#include<bits/stdc++.h>

using namespace std;

int main()
{

    string k,s;
    cin>>k>>s;
    string a={"qwertyuiop"};
    string b={"asdfghjkl;"};
    string c={"zxcvbnm,./"};
    string v;
    for(int i=0;i<s.length();i++)
    {
    	for(int j=0;j<10;j++)
    	{
           if(a[j]==s[i])
           {  if(k[0]=='L')
              v.push_back(a[j+1]);
              else 
              v.push_back(a[j-1]);
           }
           if(b[j]==s[i])
           {  if(k[0]=='L')
              v.push_back(b[j+1]);
              else 
              v.push_back(b[j-1]);
           }
           if(c[j]==s[i])
           {  if(k[0]=='L')
              v.push_back(c[j+1]);
              else 
              v.push_back(c[j-1]);
           }

    	}
    }
    for(auto i:v)
       cout<<i;    




	return 0;
}