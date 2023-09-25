#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int x;
    cin>>x;
    int sum=0;
    if(x%2==1)
    {
      cout<<"-"<<x/2+(x%2);
    }
    else 
    {
      cout<<x/2;
    }




	return 0;
}