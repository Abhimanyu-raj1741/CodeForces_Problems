

#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long mx = (a > b) ? a : b; mx = (mx > c) ? mx : c;
        bool tie = (((a == mx) + (b == mx) + (c == mx)) > 1);
        long u = (a == mx) ? tie : (mx + 1 - a);
        long v = (b == mx) ? tie : (mx + 1 - b);
        long w = (c == mx) ? tie : (mx + 1 - c);
        printf("%ld %ld %ld\n", u, v, w);
    }
        return 0;
    }


/*#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;

    cin>>a>>b>>c;
    int arr[3]={a,b,c};
    int arr1[3];
    copy(arr,arr+3,arr1);
    sort(arr1,arr1+3);

    if(a==b  && b==c)
    	cout<<a+1<<" "<<a+1<<" "<<a+1<<endl;
    else
    {
    long long max=arr1[2];
    cerr<<max<<endl;
    int flag=0;
    if(arr1[2]==arr1[1])
    	flag=1;
    for(int i=0;i<3;i++)
    {  int count=1;
    	if(arr[i]==max)
    		{   if(flag==0)
    			arr[i]=0;
    			else 
    			continue;
    		}
    	else 
    	  arr[i]=max-arr[i]+1;
    }
   /* cout<<max<<" "<<count<<endl;*/
  /* for(int i=0;i<3;i++)
   	cout<<arr[i]<<" ";
   cout<<endl;
   }
  }

 

	return 0;
}
*/