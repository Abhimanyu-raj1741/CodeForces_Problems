#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    	cin>>arr[i];
    int indexi=0,indexj=0,tempi=-1;
    int count=0;
    int max=0;
    for(int i=0;i<n;i++)
          {
          	if(arr[i]==0)
               {  if(arr[i-1]==1 && arr[i]==0 || indexi==0 ) 
               	     {
               	     	tempi=i;
               	     }
               	count++;
               	if(count>max)
               		{   indexi=tempi;
               			max=count;
               			tempi==0;
               		}
-
               }
               else if(arr[i]==1)
               	  {
               	  	count=0;

               	  }

          }
          if(tempi==-1)
          	cout<<"0"<<endl;
          else{
          	   for(int i =0;i<n;i++)
   	           max+=arr[i];
   	         cout<<max;
           }
  



	return 0;
}