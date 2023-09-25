#include<bits/stdc++.h>

using namespace std;

int factorial(int x)
{     
	if(x>1)
  return  x*factorial(x-1);
   else
   return 1; 


}

int main()
{
   int n;
   cin>>n;
   int ans=factorial(n);
    cout<<ans;




	return 0;
}