#include<bits/stdc++.h>

using namespace std;

int main()
{

     int k,n,w;
     cin>>k>>n>>w;
     int money_spent=0;
     int money=n;
     for(int i=0;i<w;i++)
     { 
     	money_spent=money_spent+k*(i+1);

     }
     if(money_spent>money)
      {
      	cout<<money_spent-money;
       }
     else 
     {
     	cout<<'0'<<endl;
     }

	return 0;
}