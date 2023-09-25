#include<bits/stdc++.h>

#define int long long int
#define F first
#define S seond
#define pb push_back

using namespace std;

int32_t main()     //int32_t converting Longlong int to 32bit
{
    vector<int> v;
    int n ;
    cin>>n;
    

    	while(n)
    {
    	int x=n%10;
    	if(n/10==0 && n%10==9)
    	{
    		v.push_back(9);
    		break;
    	}
    	if(x>=5)
    		v.push_back(abs(9-x));
    	else 
    	    v.push_back(x);
    	 n=n/10;   
         }
           reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    	cout<<v[i];
    
  
    
    
    return 0;
}