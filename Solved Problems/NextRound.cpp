#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    
     int x,y;
     cin>>x>>y;
     int arr[x];
     int store=0;
     int sum=0;
     for(int i=0;i<x;i++)
     {
        int z;
        cin>>z;
        arr[i]=z;
     }
    if(arr[y-1]==0)
    {
        for(int i=0;i<y;i++)
     {
        if(arr[i]>0)
        {
           sum++; 
        }     
    }
    }
      for(int i=0;i<x;i++)
     {
        if(arr[i]>=arr[y-1] && arr[y-1]>0)
        {
            sum++;
        }
     }
     cout<<sum<<endl;
   
     return 0;
}