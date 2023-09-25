#include<bits/stdc++.h>

using namespace std;

int main()
{

    int flag=0;
    int  n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	int y;
    	cin>>y;
    	if(y==1)
    	{
    		flag=1;
    	}
    }
   if(flag==1)
   {
   	cout<<"HARD";
   }
   else 
   {
   	cout<<"EASY";
   }


	return 0;
}