#include<bits/stdc++.h>

using namespace std;

int main()
{

     int a,b;
     cin>>a>>b;
     int move=0;
     int mins=min(a,b);
     
     if(mins==a)
     {  
     	
     	while(a<=b )
     	{
         move++;
         a=a*3;
     	 b=b*2;
     	}

     }
     else if(mins==b)
     {  
     	while(b<=a)
     	{

         move++;
         b=b*3;
     	 a=a*2;
     	}

     }

    cout<<move;



	return 0;
}