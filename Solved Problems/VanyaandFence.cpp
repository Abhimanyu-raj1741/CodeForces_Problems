#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    
    int x=0;
    int width=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<=h)
        {
        	width=width+1;
        }
        else
        {
        	width=width+2;
        }
    }
    cout<<width;
     




	return 0;
}