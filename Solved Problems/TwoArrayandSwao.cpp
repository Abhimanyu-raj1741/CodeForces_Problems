#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t ;
   cin>>t;
   while(t--)
   {
   	  int n,k,sum=0;
   	  cin>>n>>k;
   	  vector<int> a,b;
   	   
   	  for(int i=0;i<2;i++)
   	  {
   	  	  
   	  	  for(int j=0;j<n;j++)
   	  	  {
   	  	  	int x;
   	  	  	cin>>x;
   	  	  	if(i==0)
   	  	  	a.push_back(x);
   	  	    else 
   	  	    b.push_back(x);
   	  	  }

   	  }
   	  sort(a.begin(),a.end());
   	  sort(b.begin(),b.end());
   	  int m=n;
   	  int l=0;
      for(int i=0;i<k;i++)
      {
          if(a[l]<b[m-1])
          { 
            int temp=a[l];
            a[l]=b[m-1];
            b[m-1]=temp;
            m--;
            l++;
          }
      }
      /*for(auto i:a)
      	cout<<i;
      cout<<endl;

      for(auto i:b)
      	cout<<i;
      cout<<endl;*/
      for(int i=0;i<n;i++)
          sum+=a[i];
 
      cout<<sum<<endl;
    
   }




	return 0;
}