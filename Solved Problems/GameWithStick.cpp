#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int count=0;
    int x=min(n,m);
    while(x)
    {
    	count++;
    	x-=1;

    }
   if(count%2==0)
   {
   	cout<<"Malvika";
   } 
   else 
   {
   	cout<<"Akshat";
   }



	return 0;
}