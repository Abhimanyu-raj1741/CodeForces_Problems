#include<bits/stdc++.h>

using namespace std;

int main()
{

    int s,n;
     cin>>s>>n;
     int flag=0;
     vector<pair<int,int>> v;
     for(int i=0;i<n;i++)
     {
     	int x,y;
     	cin>>x>>y;
     	v.emplace_back(x,y);
     }
     sort(v.begin(),v.end());

     for(auto i :v)
     {
     	cout<<i.first<<" "<<i.second<<endl;
     }



	return 0;
}