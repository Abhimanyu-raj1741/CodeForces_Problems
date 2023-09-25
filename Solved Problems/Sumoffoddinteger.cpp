      /*<!-- Code is Written by Abhimanyu Raj -->*/
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

using namespace std;

int32_t main()     //int32_t converting Longlong int to 32bit
{

    
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      if((n%2==k%2) && k*k<=n)cout<<"YES"<<endl;
      else 
      cout<<"NO"<<endl;
            
    
      
    }
   
    


    return 0;
}