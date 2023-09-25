#include<bits/stdc++.h>

using namespace std;

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
const int mod = 10;

int powr(int a,int b)
{
	int res=1;
	while(b)
	{
		if(b&1)res*=a,res%=mod;
		a*=a%mod;a%=mod;
		b/=2;
	}
	return res;
}


int32_t main()     //int32_t converting Longlong int to 32bit
{

    int n =1e18;
    cin>>n;
     cout<<powr(8,n);


    return 0;
}