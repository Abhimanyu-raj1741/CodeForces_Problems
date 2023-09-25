#include<bits/stdc++.h>

using namespace std;

int main()
{

     int dist=0;
     cin>>dist;
     int step=0;
     if(dist<=5)
     {
     	cout<<"1";
     }
     else if(dist%5==0)
     {
     	cout<<(dist/5);
     }
     else
     {
     	cout<<(dist/5)+1;
     }



	return 0;
}