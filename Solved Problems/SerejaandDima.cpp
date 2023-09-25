#include<bits/stdc++.h>

using namespace std;

int main()
{
       // 613 418
    int n;
    cin>>n;
    int arr[n];
    int sereja=0,dima=0;
    deque <int> v;
    for(int i=0;i<n;i++)
    	{
    		int x ;
            cin>>x;
            v.push_back(x);
         }
    int i=0
    while(n)
    {     int y=v.size()-1;
    	if(i%2==0){
    	    		if(v[0]>v[y])
    	    		{
    	    			sereja+=v[0];
    	    			v.pop_front();
    	    		}
    	    		else 
    	    		{
    	    			sereja+=v[y];
    	    			v.pop_back();
    	    		}
    	    		n--;
    	    	   }
        else 
        {
        	if(v[0]>v[y])
    	    		{
    	    			dima+=v[0];
    	    			v.pop_front();
    	    		}
    	    		else 
    	    		{
    	    			dima+=v[y];
    	    			v.pop_back();
    	    		}
    	    		n--;
         }
       i++;
    }
    cout<<sereja<<" "<<dima;
    


	return 0;
}