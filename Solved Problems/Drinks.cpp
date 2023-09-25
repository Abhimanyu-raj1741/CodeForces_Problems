#include<bits/stdc++.h>

using namespace std;

int main()
{

     int x;
     cin>>x;
     double sum;
     for(int i=0;i<x;i++)
     {
     	 double a;
     	 cin>>a;
     	 
     	 sum=sum+(a/100);

     }
     
    cout<<fixed<<setprecision(12)<<(sum/x)*100;
 

	return 0;
}