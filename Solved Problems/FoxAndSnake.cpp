#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(i%2==0)
    			cout<<"#";
    		else if(i%2==1)
    			{ 
    			     if(j==0 && flag%2==1 )
                        cout<<"#";
    				else if(j==m-1 && flag%2==0 )
    					cout<<"#";
    	            else 
    	            	cout<<".";

                }
    	}
        if(i%2==1)
        {
        	flag++;
        }       
               	cout<<endl;
    }
	return 0;
}