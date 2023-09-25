#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin>>x;
    int cp=0;
    int val=0;
    for(int i=0;i<x;i++)
    {   
    	int x ,y ;
    	cin>>x>>y;
    	if(x<y && i%2==0)
    		cp=1;
        if(x>y && i%2==1)
        	val=1;

 

    }
     if(cp==1 && val==1 )
     	cout<<"Happy Alex"<<endl;
     else 
       cout<<"Poor Alex"<<endl;



	return 0;
}