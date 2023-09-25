#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin>>x;
    vector <string> v;
    for(int i=0;i<x;i++)
    {
       	if(i%2==1)
       	{
       		v.push_back("I love ");
       	}
       	else if(i%2==0)
       	{
       		v.push_back("I hate ");
       	}
       	if(x>1 && i<x-1)
       	{
       		v.push_back("that ");
       	}
    }
     v.push_back("it ");
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i];
     }



	return 0;
}