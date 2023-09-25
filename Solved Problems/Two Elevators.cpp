#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int x,y,z;
    	cin>>x>>y>>z;
    	int fl=0;
    	int sl=0;
    	fl=x-1;
        sl=z-y;
        sl=sl-1;


    	if(fl<sl)
    		cout<<"1"<<endl;
    	else if(sl<fl)
    		cout<<"2"<<endl;
    	else 
    	     cout<<"3"<<endl;
    }




	return 0;
}