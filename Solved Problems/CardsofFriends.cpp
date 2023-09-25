#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int w,h,n;
    	cin>>w>>h>>n;
    	int sheet=1;
    	while(w%2==0)
    	{   
    		sheet=sheet*2;
    		w/=2;
    	}
    	while(h%2==0)
    	{
    		sheet=sheet*2;
    		h/=2;
    	}
    	if(sheet>=n)
    		cout<<"YES"<<endl;
    	else 
    	cout<<"NO"<<endl;


    }



	return 0;
}