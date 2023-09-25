#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;)
    {
       if((arr[i]+k<=5 && arr[i+1]+k<=5 && arr[i+2]+k<=5) && (abs(i-n)>=3))
       	count++;

       i=i+3;
    }
 
 cout<<count;



	return 0;
}