#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    unordered_map<int,pair<int,int>> u;
    int h,g;
    for(int i=1;i<=n;i++)
    {
    	cin>>h>>g;
    	u[i]={h,g};
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++){
    		if(i!=j){
    			if(u[i].first==u[j].second) 
    				cnt++;
    		}
    	}
    }


  cout<<cnt;

	return 0;
}