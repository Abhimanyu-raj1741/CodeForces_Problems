#include<bits/stdc++.h>

using namespace std;
int  digi(long long int y)
{  int sum=0;
   int count=0;
   while(y>0)
   {
     int temp=y%10;
     sum=sum+temp;
     y/=10;
     count++;
   }
   if(count==1)
      return sum;
   else 
     digi(sum);
   
}
int main()
{

    long long int x;
    cin>>x;
    cout<<digi(x);




	return 0;
}