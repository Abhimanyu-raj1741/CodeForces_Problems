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
      int ans=1;
      int i=2;
      set<string> taken;
      string take="";
      take+=s[0];
      take+=s[1];
      taken.insert(take);

      while(i<n)
      {	take="";
            take+=s[i-1];
            take+=s[i];
            taken.insert(take);
            ++i;}
     
     cout<<taken.size();
     cout<<endl;

    }




	return 0;
}