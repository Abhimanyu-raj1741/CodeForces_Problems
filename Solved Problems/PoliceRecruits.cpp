#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
    int arr[n];
    int untreated=0;
    int flag=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	arr[i]=x;
    }
     for(int i=0;i<n;i++)
    { 
       if(arr[i]==-1 && flag==0)
       {
       	untreated++;
        
 
       }
       if(arr[i]>0 && flag==0)
       {
       	flag=1;
       }
       if(flag==1)
       {   if(arr[i]>0)
            sum=sum+arr[i];
            
       	   if(arr[i]<0)
            {
               sum--;
            }
       	   if(sum<0)
            {   
               sum=0;
               untreated++;
            }
 
            
       }
    }
       cout<<untreated;
 
 
	return 0;
}