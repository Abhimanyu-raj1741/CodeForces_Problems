#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {    int x,y,z;
         cin>>x>>y>>z;
    	 int arr[3]={x,y,z};
    	 sort(arr,arr+3);
         cout<<arr[1]<<endl;
    }




	return 0;
}