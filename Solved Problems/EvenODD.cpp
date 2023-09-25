#include<bits/stdc++.h>

using namespace std;

int main()
{

     long long int  x,y;
     cin>>x>>y;
     long long int z;
     long long int index =0;
     if(x%2==1)
     {
     	index=(x/2)+1;
     }
     else 
     {
     	index=x/2;
     }
     
     if(y<=index)
     {  
     	
     	cout<<(2*(y-1))+1;
     }
     else
     {
     	z= (y-(index))*2;
     	cout<<z;
     }
     
 


	 return 0;
}