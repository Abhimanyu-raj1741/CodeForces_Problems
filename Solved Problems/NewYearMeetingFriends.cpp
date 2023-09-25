#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[3];
    for(int i=0;i<3;i++)
    {
    	cin>>arr[i];

    }
   sort(arr,arr+3);
   int x=arr[2]-arr[1];
   int y=arr[1]-arr[0];
   cout<<x+y;




	return 0;
}