#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,a,b;
    cin>>n>>m>>a>>b;
     int ride=1;
     int rideprice=1;
     int ridesimple=n*a;
     if((n/m)+1*b<a)
     {
     	cout<<(n/m)+1*b;

     }
     else{
          ride=n/m;
          rideprice=ride*b;
          int remainride=n%m;
          if(a<b)
          rideprice=rideprice+remainride*a;
          if(a>b)
          rideprice=rideprice+remainride*b;	
          cout<<min(rideprice,ridesimple);
      } 


	return 0;
}