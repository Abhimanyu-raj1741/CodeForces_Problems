#include<bits/stdc++.h>

#define int long long int
#define F first
#define S seond
#define pb push_back


using namespace std;

int32_t main()     //int32_t converting Longlong int to 32bit
{ 
     int x,y;
     cin>>x>>y;
     if(9*x<y)
     	cout<<"-1 -1"<<endl;
     else if(y<1*x)
     	cout<<"-1 -1"<<endl;
     else 
     {  int num=0;
     	int sum=0;
     	int res=0;
     	num=pow(10,x);
     	cerr<<num;
     	while(1)
     	{   sum=0;
            
            while(num!=0)
            {
            	int x=num%10;
            	sum=sum+x;
            	num=num/10;
            }

            if(sum==y)
            {   res=num;
            	break;
            }
          num--;

     	}
     	cout<<num;
     }
    
    


    return 0;
}