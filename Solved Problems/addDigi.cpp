#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int x;
    cin>>x;
    int sum=0;
    int sum1=0;
     int sum2=0;
    while(x>0)
    {
      int temp=x%10;
      sum=sum+temp;
      x=x/10;
    }
    
    if(sum<10)
      cout<<sum;
    else if(sum<=54 && sum>10)
    {   int n =sum;
        while(n>0)
    {
      int temp=n%10;
      sum1=sum1+temp;
      n=n/10;
    }
     
    }
    else 
    {   int n =sum1;
       
      while(n>0)
    {
      int temp=n%10;
      sum2=sum2+temp;
      n=n/10;
    }
    }
    if(sum<=54 )
      cout<<sum1;
    if(sum1>9)
     cout<<sum2;
	return 0;
}