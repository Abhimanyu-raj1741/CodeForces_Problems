#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int x;
    cin>>x;
    vector<int> v;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
 
    }
    sort(v.begin(),v.end());
    for(auto i:v)
    {
       cout<<i<<" ";
    }
 
 
 
 
  return 0;
}