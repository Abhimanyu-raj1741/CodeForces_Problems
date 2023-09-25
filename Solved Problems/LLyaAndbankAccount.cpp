#include<bits/stdc++.h>

using namespace std;

int main()
{

     long  n;
    cin>>n;
    if(n>=0)
    	cout<<n;
    else
    {
      long  digit=n%10;
      long deletedlast=n/10;
      long seconddeleted=deletedlast-(deletedlast%10)+digit;
       
      if(deletedlast>seconddeleted)
         cout<<deletedlast;
       else 
         cout<<seconddeleted;
    	


    }




	return 0;
}