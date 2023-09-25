#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int x;
    	cin>>x;
    	int digit=0;
    	int number=x%10;
    	while(x)
    	{   
    		x=x/10;
    		digit++;
    	}
    	if(digit==1)
    		cout<<(number-1)*10+1<<endl;
    	if(digit==2)
    		cout<<(number-1)*10+3<<endl;
    	if(digit==3)
    		cout<<(number-1)*10+6<<endl;
    	if(digit==4)
    		cout<<(number-1)*10+10<<endl;
        
    }




	return 0;
}