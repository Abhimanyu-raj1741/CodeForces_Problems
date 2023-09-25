#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,c;
    cin>>n;
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
    	 cin>>m>>c;
    	 if(m>c)
    	 	sum1++;
    	 else if(m==c)
    	 	continue;
    	 else 
    	    sum2++;
    }
    if(sum1>sum2)
    {
    	cout<<"Mishka";
    }
    else if(sum1<sum2)
    {
    	cout<<"Chris";
    }
    else
    {
    	cout<<"Friendship is magic!^^";
    }




	return 0;
}