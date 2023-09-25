#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    
      int size;
      cin>>size;
      int arr[size][3];
 
      int sol_imp=0;
       for(int i =0;i<size;i++ )
      {
        for(int j=0;j<3;j++)
        {   
            int x;
            cin>>x;
            arr[i][j]=x;
        }
      }
       for(int i =0;i<size;i++ )
      {    int count=0;
        for(int j=0;j<3;j++)
        {   
            
            count=count+arr[i][j];
            
        }
        if(count>=2)
            {
                sol_imp=sol_imp+1;
            }
        
      }
       cout<<sol_imp<<endl;
   
     return 0;
}