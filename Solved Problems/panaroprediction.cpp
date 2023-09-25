#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x,y;
    cin>>x>>y;
    
    int prime=0;
    for(int i=x+1;i<=y;i++)
    {    
    	int factor=0;
    	for(int j=2;j<=i;j++)
    	{
    		if(i%j==0)
    		{
    			factor++;
    			
    		}
    	    if(factor==1 && j==i)
    	    {   if(prime==0)
    	    	prime=i;
    	    	break;
    	    }
    	    	
        }
       
    	
    }
    if(prime==y)
    	cout<<"YES";
    else 
      cout<<"NO ";



	return 0;
}