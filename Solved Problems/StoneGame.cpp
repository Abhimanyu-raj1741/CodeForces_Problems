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
      int n;
      cin>>n;
      int arr[n],arr1[n];
      for(int i=0;i<n;i++)
        {
          cin>>arr[i];
          arr1[i]=arr[i];
        }
        sort(arr1,arr1+n);
        int minx=arr1[0],maxx=arr1[n-1];
        int index=0;
        int flag=0;
        int j=0;
        int minindex=0,maxindex=0;
        
        for(int i=0;i<n;i++)
        {
          if(arr[i]==minx)
             minindex=i+1;
           if(arr[i]==maxx)
             maxindex=i+1;    
         
        } 
         cout<<minindex<<" "<<maxindex<<endl;

         if(n%2==0)
         {
           if(((minindex<=n/2)&&(maxindex<=n/2))||((minindex>n/2)&&(maxindex>n/2)) )
          {
            cout<<max(minindex,maxindex)<<endl;
           }
           else 
           {  if(abs(maxindex-minindex)<(minindex+(n+1)-maxindex))
                cout<<max(minindex,maxindex)<<endl;
                else
              {cerr<<minindex+(n+1)-maxindex<<endl;
                cout<<minindex+(n+1)-maxindex<<endl;}
           }
         }
      }
  
    return 0;

}