#include<bits/stdc++.h>

using namespace std;
void digi(int y)
{
   for(int i=0;i<y;i++)
   {
   	cout<<" * ";
   }
   cout<<endl;
   y--;
   if(y==0)
   	return;
   else 
   digi(y);
}
int main()
{

    int x;
    cin>>x;
    digi(x);




	return 0;
}