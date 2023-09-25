#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {    
        int arr[26]={0};
        int n;
        cin>>n;
     	string s;
     	cin>>s;
     	int flag=0;
     	for(int i=0;i<s.length();i++)
     	{   
     		if(s[i]!=s[i+1])
```````````````````````````````````````````````````````````````````     		{    
     			arr[s[i]-'A']=1;
     			if(arr[s[i+1]-'A']==1)
     			{
     				flag=1;
     				break;
     			}
     		}
     	}
     	if(flag)
     		cout<<"NO"<<endl;
     	else 
     	  cout<<"YES"<<endl;
     }

	return 0;
}


     	


