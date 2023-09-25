#include<bits/stdc++.h>

using namespace std;

int main()
{

    int count=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	if(y-x>=2)
    	{
    		count=count+1;
    	}

    }
   cout<<count;



	return 0;
}