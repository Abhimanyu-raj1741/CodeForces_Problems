#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[4];
    for(int i=0;i<4;i++)
    	cin>>arr[i];
    sort(arr,arr+4);
    if(arr[0]==arr[1]==arr[2])
    	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    else
    {
    	int max=arr[3];
    	int maxe=arr[3]-arr[0];
    	int mide=arr[2]-maxe;
    	int lowe=max-mide-maxe;
    	cout<<mide<<" "<<lowe<<" "<<maxe;
    }





	return 0;
}