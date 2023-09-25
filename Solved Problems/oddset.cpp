#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

    	int n;
    	int cnt_e=0,cnt_o=0;
    	cin>>n;
    	for(int i=0;i<n*2;i++)
    	{
    		int x;
    		cin>>x;
    		if(x%2==0)
    			cnt_e++;
    		else 
    		   cnt_o++;

    	}
    	
    	if(cnt_e==cnt_o)
    		cout<<"YES"<<endl;
    	else 
    	    cout<<"NO"<<endl;
    }




	return 0;
}