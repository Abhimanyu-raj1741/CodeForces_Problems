#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5][5];
    int indexi=0;
    int indexj=0;
    int move=0;
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	{
          int x=0;
          cin>>x;
          arr[i][j]=x;
          if(x==1)
          {
          	indexi=i+1;
          	indexj=j+1;

          }

    	}
    	
    }
    cout<<(abs(indexi-3)+abs(indexj-3));
 


	return 0;
}