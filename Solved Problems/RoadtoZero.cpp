#include<bits/stdc++.h>

#define int long long int
#define F first
#define S seond
#define pb push_back

/*
(a+b)% M = ((a % M)+(b % M)% M)
(a*b)% M = ((a % M)*(b % M)% M)
(a-b)% M = ((a % M)-(b % M)+ M) % M
(a/b)% M = ((a % M)*(b-1(inverse))% M) % M
*/
const int mod = 1e9+7;

using namespace std;

int32_t main()     //int32_t converting Longlong int to 32bit
{

     int t;
    cin>>t;
    while(t--)
    {
    	int x,y,a,b;
    	cin>>x>>y>>a>>b;
        int min=0,max=x,cost=0;
        if(x<y)
        	max=y;
        cost=(x+y)*a;
           min=cost;
        cost=b*max;
            if(cost<=min)
         
            	min=cost;
              
        

          cout<<min<<endl;
        }


 


        

        

    return 0;
}