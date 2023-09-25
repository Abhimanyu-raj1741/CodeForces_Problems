#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int time=240;
    int ltime=time-k;
    int qtime=0;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
         qtime+=5*i;
       
         arr[i]=qtime;
         if(qtime>ltime )
         {
            cout<<i-1;
            break;
         }
         if(i==n)
         {
         	cout<<n;
         }
    }






	return 0;
}