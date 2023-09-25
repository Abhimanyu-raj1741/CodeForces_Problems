/* This Code is Written 
   By ABHIMANYU KUMAR
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{

int n,k;
      cin>>n>>k;
      int arr[n];
      for(int i=0;i<n;i++)
      	cin>>arr[i];
      int min=0,sum=0;
      int index=0;
      for(int i=0;i<k;i++)
      {
      	min+=arr[i]; // First K sum store here
      }

      sum=min;
      for(int i=1;i<n-(k-1);i++)
      {    
      	    if(k>1)
      	  {
      	  	sum=sum-arr[i-1]+arr[(k-1)+i];   // Sliding window Techniques 
      	  	  //add next index and subtract previous index
      	      if(sum<min)
      	       { min=sum;
      	       	
      	         index=i;
      	       }
      	   }
      	     else 
      	  {
      	    	sum=arr[i];
      	    	if(sum<min)
      	    	{   min=sum;
      	    		index=i;
      	    	}
      	  }       
      	
      }
     cout<<index+1<<endl;

	return 0;
}