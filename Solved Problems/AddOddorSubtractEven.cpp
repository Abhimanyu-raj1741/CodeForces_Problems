#include<bits/stdc++.h>

using namespace std;

int main()
{
      //  Even means Subtract 
	  //  Odd means add
     int t;
     cin>>t;
     while(t--)
     {
         int x,y;
         cin>>x>>y;
         if(x==y)
         	cout<<"0"<<endl;
         if(x<y)
          {if((y-x)%2==1)
                   	cout<<"1"<<endl;
                   else
                   	cout<<"2"<<endl;}
         if(x>y)
            {
            	if((x-y)%2==1)
            	{
            		cout<<"2"<<endl;
            	}
            	else 
            	cout<<"1"<<endl;
            }          
     }




	return 0;
}