#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<pair<string,int>> v;
    for(int i=0;i<n;i++)
    {   string s; 
         cin>>s;
         v.push_back({s,0});
    	 
    }
    int k=0;
    for(int j=1;j<n;j++)
    {
       if(v[j].first)
    }

   for(auto i:v)
   {
   	cout<<i.first<<" "<<i.second<<endl;;
   }


	return 0;
}