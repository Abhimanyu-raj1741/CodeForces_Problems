#include<bits/stdc++.h>

using namespace std;

int main()
{
     int k=0;
     string s;
     cin>>s;
     int flag=0;
     for(int i=1;i<s.length();i++)
     {
         if((s[i]>=65 && s[i]<=90) && (s[i+1]>=97 && s[i+1]<=122))
         {
            flag=1;
         }
         if((s[i]>=97 && s[i]<=122) && (s[i+1]>=65 && s[i+1]<=90))
         {
            flag=1;
         }
     }
     for(int i=0;i<s.length();i++)
     {
      
         if(flag==1)
          {
         break;
          }
         if(s[i]>96 && s[i+1]<90 && k==0 && i<s.length()-1)
          {  
     	        
          s[i]=s[i]-32;
          k=1;

          continue;
         }
      else if(k==1)
      { 
    	
    	s[i]=s[i]+32;
       }
       if( (s[0]<=90 && s[1]<=90) && flag==0 && s.length()>1)
       {
      transform(s.begin(),s.end(),s.begin(),::tolower);
        }   
         
       if(s.length()==1)
        {

            if(s[0]>=97)
            {
               
                transform(s.begin(),s.end(),s.begin(),::toupper);
            }
            else
            {
                   
                transform(s.begin(),s.end(),s.begin(),::tolower);
            }
     
     
        }
     }
   cout<<s;
	return 0;
    
}