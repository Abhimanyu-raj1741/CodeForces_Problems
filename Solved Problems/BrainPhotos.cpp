#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int flag=0;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    		cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    		{
    			if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y' )
    				flag=1;
    		}
    }
    if(flag)
    	cout<<"#Color";
    else 
      cout<<"#Black&White";




	return 0;
}