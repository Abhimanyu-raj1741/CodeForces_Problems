#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    vector<int> v;
    cin>>n>>m;
    if(n<m)
    	cout<<"-1";
    else if(n==m)
    {
      cout<<n;
    }
    else 
    {
    	if((n/2)%m==0 && n%2==0)
    		cout<<n/2;
    	else 
    	{
    		int step=((n/2)/m)+1;
    		step=step*m;
    		cout<<step;
    	}
    }
    



	return 0;
}