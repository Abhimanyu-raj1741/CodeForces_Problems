#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin>>x;
    int level=0;
    int cubes=0;
    int height=0;
    int sum=0;
    while(sum<=x)
    {  level++;
       cubes=cubes+level;
       height++;
       sum+=cubes;
    }
    cerr<<sum;
    if(sum>x)
    	cout<<height-1;
    else
       cout<<height;

	return 0;
}