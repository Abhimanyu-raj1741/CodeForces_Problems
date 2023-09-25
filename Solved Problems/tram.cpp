#include<bits/stdc++.h>

using namespace std;

int main()
{
     int x;
     cin>>x;
     int unlod[x];
     int lod[x];
     int max=0;
     int z=0;
     for(int i=0;i<x;i++)
     {
     	  int a,b;
     	  cin>>a>>b;
     	  unlod[i]=a;
     	  lod[i]=b;
     } 
     for(int i=0;i<x;i++)
       {  
     	if(i==0)
     	{	max=lod[i];
     	    z=lod[i]; 
        }
     	if(i<x-1)
     	z=(z-unlod[i+1])+lod[i+1];
     	if(z>max)
     	{
     		max=z;
     	} 
     
        }
     cout<<max;
      
    // for(int i=0;i<x;i++)
    //  {
    //  	cout<<unlod[i]<<" "<<lod[i]<<endl;
    //  }
    




	return 0;
}