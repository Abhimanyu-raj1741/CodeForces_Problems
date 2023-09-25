#include<bits/stdc++.h>
 
using namespace std;
 #define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define mod 1000000007;

typedef long long ll ;
#define line cout<<endl;
/* ascii value 
A=65,Z=90,a=97,z=122
*/
 
 
int main()
{
	pan;
	ll s,v1,t1,v2,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	if((s*v1+2*t1)<(s*v2+2*t2))
		cout<<"First"<<endl;
	else if((s*v1+2*t1)>(s*v2+2*t2))
		cout<<"Second"<<endl;
	else
		cout<<"Friendship"<<endl;
}
