#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	
    	int sum1=0,sum2=0;
    	int x;
    	cin>>x;
    	int digit=0;
    	while(x)
    	{  
    		digit++;
    		if(digit<=3)
    			sum2+=x%10;
    		if(digit>3)
    			sum1+=x%10;
    		x=x/10;

    	}
    	if(sum1==sum2)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }




	return 0;
}