#include<bits/stdc++.h>

using namespace std;

int main()
{
     int solve=0;
    int x,y,z;
    cin>>x>>y>>z;
    int sum=0;
    sum=x+y*z;
    if(sum>solve)
    	solve=sum;
    sum=x*(y+z);
    if(sum>solve)
    	solve=sum;
    sum=x*y*z;
    if(sum>solve)
    	solve=sum;
    sum=(x+y)*z;
    if(sum>solve)
    	solve=sum;
    sum=x+y+z;
    if(sum>solve)
    	solve=sum;

    
    cout<<solve;


	return 0;
}