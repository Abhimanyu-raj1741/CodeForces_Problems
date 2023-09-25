#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x,y;
    string s;
    cin>>x>>y;
    cin>>s;
     
    while(y!=0)
    {
    for(int i=0;i<s.length();i++)
    {
       if(s[i]=='B' && s[i+1]=='G')
       {
          swap(s[i],s[i+1]);
          i=i+1;
       }
    }
    y--;
   }
    cout<<s;



	return 0;
}