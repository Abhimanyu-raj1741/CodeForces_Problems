#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin>>x;
    int count=0;
    while(x!=0)
    {
    	if(x>=100)
    	{
           x=x-100;
           count++;
          
    	}
    	else if(x>=20)
    	{
    		x=x-20;
    		count++;
            
    		
    	}
    	else if(x>=10)
    	{
    		x=x-10;
    		count++;
    		
    	}
    	else if(x>=5)
    	{
    		x=x-5;
    		count++;
    		
    	}
    	else if(x>=1)
    	{
    		x=x-1;
    		count++;
    		
    	}
    }

     
 cout<<count;

	return 0;
}