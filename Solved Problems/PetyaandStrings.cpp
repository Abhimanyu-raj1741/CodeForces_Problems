#include<bits/stdc++.h>

using namespace std;

int main()
{

     string s1;
     string s2;
     int flag=0;
     int store=5;
          
     cin>>s1>>s2;
     int length=s1.length();
     transform(s1.begin(),s1.end(),s1.begin(),::tolower);
     transform(s2.begin(),s2.end(),s2.begin(),::tolower);
         for(int i=0;i<length;i++)
     {  
        
       if(s1[i]==s2[i])
       {
       	flag=flag+1;
      
       	if(flag==length)
       	{
       		store=0;
       	}
       }
       else if(s1[i]<s2[i])
       {
       	
       	store=-1;
       	break;
       }
        else if(s1[i]>s2[i])
       {
       	
       	store=1;
       	break;
       }
     }

    cout<<store<<endl;

      


	return 0;
}