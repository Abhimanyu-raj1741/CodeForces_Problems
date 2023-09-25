#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int x;
    cin>>x;
    int count=0;
    int sum=0;
    cout<<"hello";
    while(x>0);
    {
    	int temp=x%10;
    	sum=sum+temp;
    	x=x/10;
    }
     if(sum<10)
     {
     	cout<<sum;
     }
    else if(sum<=54 && sum>10)
    {   int sum2=0;
    	while(sum>0)
    	{
          int temp=sum%10;
          sum2=sum2+temp;
          sum=sum/10;
    	}
    	cout<<sum2;
    }
    else{
    	cout<<"wait";
    }


	return 0;
}