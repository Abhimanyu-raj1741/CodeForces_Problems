#include<bits/stdc++.h>

using namespace std;

int main()
{

     int n;
     cin>>n;
     int arr[n][n];
     for(int i=0;i<n;i++)
     {  int sum=1;
     	for(int j=0;j<n;j++)
     	{    
     		if(i==0)
     			arr[i][j]=1;
     		else if(i==1)
     			arr[i][j]=j+1;
     		else 
     		    {   
     		    	if(j==0)
     		    		arr[i][j]=1;
     		    	else 
     		    	{
     		    		 sum+=arr[i-1][j];
     		    		arr[i][j]=sum;
     		    	}


     		     }
     	}
     }

    /*for(int i=0;i<n;i++)
    	{for(int j=0;j<n;j++)
     	    		cout<<arr[i][j]<<" ";
     	    		cout<<endl;
    	}*/
     cout<<arr[n-1][n-1];

	return 0;
}