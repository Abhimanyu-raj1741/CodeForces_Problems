#include<bits/stdc++.h>

using namespace std;

int main()
{

    int sum=0;
    int n;
    cin>>n;
    int sumx=0,sumy=0,sumz=0;
    
    for(int i=0;i<n;i++)
    {
    	int x,y,z;
    	cin>>x>>y>>z;
    	sumx+=x;
    	sumy+=y;
    	sumz+=z;

    }
    if(sumz==0 && sumy==0 && sumz==0)
    {
    	cout<<"YES";
    }
    else
    {
    	cout<<"NO";
    }



	return 0;
}