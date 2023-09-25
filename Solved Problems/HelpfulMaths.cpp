#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   vector <int> v;
   int ele=((s.length()+1)/2);
   char car[s.length()];
   for(int i=0;i<s.length();i++)
   {
      if(i%2==0)
      { 
      	int m=s[i]-48;
        v.push_back(m);
      }



   }
    sort(v.begin(),v.end());
     

    for(int i=0;i<v.size();i++)
    {
    	cout<<v[i];
    	if(i>=0 && i<v.size()-1)
    	{
           cout<<'+';
    	}
    }

   
     return 0;
   
}