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
     for(int i=0;i<n;i++)
     {   
     	if(s>v[i].first)
     	{
     		s+=v[i].second;
     	}
     	else{
     		break;
     	}
     	if(i==n-1)
     	{
     		flag=1;
     	}
     }
       if(flag==1) 
       {
       	cout<<"YES";

       }
       else 
       cout<<"NO";
       



	return 0;
}