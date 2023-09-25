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
         
         if(f==0)
         {
         	j++;
         	count++;
         	f=1;
         }
         else if(s[i-1]==c[j-1] && s[i]==c[j] && f==1)
         {
            j++;
            count++;
            f=0;
         }

       }
   }
   cout<<count;
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