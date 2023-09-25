#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       int n;
       string s;
       cin>>n>>s;
       int flag=1;
       if(s.length()!=5)
       	cout<<"NO"<<endl;
       else {
       	int arr[5]={0};
       	
       
       for(int i=0;i<s.length();i++)
       {
       	 if(s[i]=='T')
       	 {
       	 	arr[0]++;
       	 }  
       	 else if(s[i]=='i')
       	 {
       	 	arr[1]++;
       	 } 
       	 else if(s[i]=='m')
       	 {
       	 	arr[2]++;
       	 } 
       	 else if(s[i]=='u')
       	 {
       	 	arr[3]++;
       	 } 
       	 else if(s[i]=='r')
       	 {
       	 	arr[4]++;
       	 } 
       	 else 
       	 { 
       	 	flag=0;
       	 	break;
       	  }
       }
       
       
       if(flag==1 && arr[0]==1 && arr[1]==1 && arr[2]==1 && arr[3]==1 && arr[4]==1)
       	cout<<"YES"<<endl;
       else 
       cout<<"NO"<<endl;

    }


}

	return 0;
}