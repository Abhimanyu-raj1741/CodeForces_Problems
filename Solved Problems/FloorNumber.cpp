#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	int ap=2,floor=1;
       int x,y;
        cin>>x>>y;
        if(x==1 && x==2)
        	cout<<floor<<endl;
        else 
        {
        	while(ap<x)
        	{ 
        		ap=ap+y;
                floor++;

        	}
        	cout<<floor<<endl;;
        }

    }




	return 0;
}