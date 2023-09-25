#include<bits/stdc++.h>

using namespace std;

int main()
{

    int count=0;
    string s;
    cin>>s;
    int eflag=0;
    vector <char> v;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
    	{     
            if(eflag==1)
               { 
                v.push_back(' ');
                eflag=0;
               }
        
    		i+=2;
             
               
            
    		
    	}

    	else  
    	{   
            char ch=s[i];
    		v.push_back(ch);
            eflag=1;
    	}
        
    }
    
   for(auto i:v)
   {
    cout<<i;
   }

	return 0;
}