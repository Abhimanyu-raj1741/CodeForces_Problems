#include<bits/stdc++.h>

using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int arr[1001];
    int digit;
    int j=1;
    for(int i=1;i<INT_MAX;i++)
    {    digit=i%10;
    	if(i%3!=0 && digit!=3 )
    	{ 
    		arr[j]=i;
          if(j==1000)
          	{break;}
           
            j++;
    	}
    }
    while(t--)
    {
    int n;
    cin>>n;
    
    cout<<arr[n]<<endl;
  

}
	return 0;
}