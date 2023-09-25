#include<bits/stdc++.h>

#define int long long int
#define F first
#define S seond
#define pb push_back

using namespace std;

int32_t main()     //int32_t converting Longlong int to 32bit
{
    int n;
    cin>>n;
    int arr[n+n-1] ,arr1[n-1+n-2];
    for(int i=0;i<n+n-1;i++)
        {
            if(i<n)
                cin>>arr[i];
            else{
                cin>>arr[i];
                arr1[i-n]=arr[i];
            }
        }
        for(int i=0;i<n-2;i++)
        {
            cin>>arr1[n-1+i];
        }
        int currxor=0;
  for(int i=0;i<n+n-1;i++)
    currxor=currxor^arr[i];
    cout<<currxor;
    cout<<endl;  

    currxor=0;
   for(int i=0;i<n-1+n-2;i++)
       currxor=currxor^arr1[i];
      cout<<currxor;

    return 0;
}