#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int arr[4];
    	for(int i=0;i<4;i++)
    		cin>>arr[i];
    	int x=max(arr[0],arr[1]);
    	int y=max(arr[2],arr[3]);
    	sort(arr,arr+4);
    	if(x+y==arr[2]+arr[3])
    		cout<<"YES"<<endl;
    	else 
    	  cout<<"NO"<<endl;

    }




	return 0;
}