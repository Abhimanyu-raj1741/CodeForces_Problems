#include<bits/stdc++.h>

using namespace std;

int main()
{

   string s;
   string c="hello";
   cin>>s;
   string k;
   int f=0;
   int j=0;
   int count=0;
   for(int i=0;i<s.length();i++)
   {
       
       if(s[i]==c[j]  )
       { 
          j++;
         count++;


       }
   }
   
   if(count==5)
   {
   	cout<<"YES";

   }
   else 
   {
   	cout<<"NO";
   }



	return 0;
}