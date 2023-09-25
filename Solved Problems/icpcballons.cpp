#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int arr[26]={0};
    	int n;
    	int sum=0;
    	string s;
    	cin>>n>>s;
    	for(int i=0;i<s.length();i++)
    	{
    		int x=s[i]-65;
    		if(arr[x]==0)
    			arr[x]+=2;
    		else 
               arr[x]+=1;
    	}
    	for(int i=0;i<26;i++)
    		sum+=arr[i];
    	cout<<sum;
       cout<<endl;
    } 




	return 0;
}