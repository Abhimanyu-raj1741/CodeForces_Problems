#include<bits/stdc++.h>

using namespace std;

int main()

{

    int a,b;
    cin>>a>>b;
    int hrs=a;
   
    while(a>=b)
    {
    	hrs+=(a/b);
    	a=(a/b)+(a%b);
    	 
    }
    
   cout<<hrs;


	return 0;
}