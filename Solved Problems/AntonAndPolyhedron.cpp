#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin>>x;
    int sum=0;
   
    for(int i=0;i<x;i++)
    {
    	string s;
    	cin>>s;
    	
    	if(s=="Tetrahedron")
    	{
          sum+=4;
    	}
    	else if(s=="Cube")
    	{
          sum+=6;
    	}
    	else if(s=="Octahedron")
    	{
          sum+=8;
    	}
    	else if(s=="Dodecahedron")
    	{
          sum+=12;
    	}
    	else if(s=="Icosahedron")
    	{
          sum+=20;
    	}
    }
    
    
       cout<<sum;


	return 0;
}