#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<string> v;
    vector<pair<int,string>> m;
    vector<int> c;
    int flag=0,count=1;
    for(int i=0;i<n;i++)
    {
       string s;
       cin>>s;
       v.emplace_back(s);

    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
       if(v[i]==v[i+1])
       {
       	count++;
       }
       else if(v[i]!=v[i+1])
       {
       	m.emplace_back(count,v[i]);
       	count=1;
       }

    }
    sort(m.begin(),m.end());
    int size=m.size();
    cout<<m[size-1].second;
   // for(auto i:v)
   // {
   // 	cout<<i<<endl;
   // }
   // for(auto j:m)
   // {
   // 	cout<<j.first<<j.second<<endl;
   // }
   
   


	return 0;
}