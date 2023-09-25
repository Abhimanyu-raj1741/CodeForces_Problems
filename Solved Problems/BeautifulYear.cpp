#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int sum;
    vector<int> v(10,0);
     for(int i=x+1;i<=9000;i++)
     {   
           int z=i;
          sum=0;
     	  while(z!=0)
     	  {  
     		int n;
     		n=z%10;
     		v[n]=1;
     		z=z/10;

     	  }
     	  for(int k=0;k<10;k++)
     	  {
     		sum=sum+v[k];

     	   }
     	   if(sum==4)
     	   {
     	   	cout<<i<<"-";
     	   }
     
       
      } 
     
     	
       
     
     


	return 0;
 }
