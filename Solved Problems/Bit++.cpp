#include<bits/stdc++.h>

using namespace std;

int main()
{

     int x=0;
     int num;
     cin>>num;
     
     for(int i=0;i<num;i++)
     {

     	 string s;
     	cin>>s;
     	if(s[1]=='+')
     	{
     		x++;
     	}
     	else 
     	{
     		x--;
     	}
     }
     
    
     cout<<x<<endl;



	return 0;
}