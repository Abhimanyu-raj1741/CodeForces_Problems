/*author - Abhimanyu Kumar*/
#include<bits/stdc++.h>
using namespace std;

#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")

#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"

#define pow2(x) ((x)*(x))
#define ll long long
#define ld long double
#define eb emplace_back
#define pb push_back
#define pf push_front

#define mod 1000000007
#define clock (clock() * 1000.0 / CLOCKS_PER_SEC)

#define mp make_pair
#define ff first
#define ss second
#define null NULL

#define all(c) (c).begin(),(c).end()
#define nl "\n"

typedef vector<ll> vl;
typedef vector< vl > vvl;
typedef pair< ll,ll> pll;
typedef map< ll,ll> mll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
		ll n,a,b;
        cin>>n>>a>>b;
        
        // int i=97;
        // char c = (char)i;
        // cout<<c;

        // fill satrting a with b letters
        char arr[2*a];
        ll A = a;
        ll j=0;
        while(a>0){
            for(ll i=97;i<97+b;i++){
                arr[j++] = (char)i;
            }
            a = a - b;
        }

        a = A;
        // for(ll i=0;i<a;i++){
        //     cout<<arr[i]<<" ";
        // }

        while(n>0){
            if(n-a>=0){
                for(ll i=0;i<a;i++){
                    cout<<arr[i];
                }
            }else{
                ll val = n;
                for(ll i=0;i<val;i++){
                    cout<<arr[i];
                }
                break;
            }
            n = n-a;
        }
        cout<<"\n";
    }
    return 0;
}