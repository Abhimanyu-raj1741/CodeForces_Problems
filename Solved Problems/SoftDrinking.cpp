#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[8];
    for(int i=0;i<8;i++)
    {
    	cin>>arr[i];
    }
    int fridrink=arr[1]*arr[2];
    int enoughmake=fridrink/arr[6];
    int limes=arr[3]*arr[4];
    int saltenough=arr[5]/arr[7];
    int arj[]={enoughmake,limes,saltenough};
    sort(arj,arj+3);
    cout<<arj[0]/arr[0];






	return 0;
}