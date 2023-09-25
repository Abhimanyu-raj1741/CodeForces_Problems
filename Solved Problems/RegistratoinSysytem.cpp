#include<bits/stdc++.h>

using namespace std;

int main()
{

  int size;
  cin>>size;
  string value;
   cin>>value;
   int cou=0;
   for(int i=0;i<size;i++)
   {
    if(value[i]==value[i+1] && i!=size-1)
        cou++;
   }
  cout<<cou;


	return 0;
}