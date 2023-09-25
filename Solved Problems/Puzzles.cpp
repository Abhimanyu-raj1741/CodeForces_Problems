#include<bits/stdc++.h>

using namespace std;

int main()
{ 
    int flag=0;
   
    string a,b,c;
    cin>>a>>b>>c;
    a.append(b);
    int arr[26]={0};
    int arr1[26]={0};
    for(int i=0;i<a.length();i++)
    {
        arr[a[i]%65]++;

    }
     for(int j=0;j<c.length();j++)
    {
        arr1[c[j]%65]++;

    }
     for(int i=0;i<26;i++)
     { 
          if(arr[i]!=arr1[i])
            flag=1;
     }
   
     if(flag==0)
     {
        cout<<"YES";
     }
     else 
     {
        cout<<"NO";
     }

	return 0;


}