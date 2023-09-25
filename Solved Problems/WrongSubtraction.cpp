#include<bits/stdc++.h>

using namespace std;

int main()
{

     string s;
     string r;
     cin>>s>>r;
     reverse(r.begin(),r.end());
    
     if(s==r)
     {
     	cout<<"YES";
     }
     else
     {
     	cout<<"NO";
     }




	return 0;
}