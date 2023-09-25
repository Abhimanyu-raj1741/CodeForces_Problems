#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int n=s.length()-1;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
    	int sum=0;
    	sum=s[i]-64+s[i+1]-64;
    	arr[i]=sum;
    }
    int j=0;
    for(int i=1;i<n;i++)
    {
         int temp=0;
         if(arr[j]==s[i]-64+s[i+1]-64)
         {
         	j++;
         }
    }




	return 0;
}