#include<bits/stdc++.h>

using namespace std;

int main()
{

    int count=0;
    
    string s;
    getline(cin,s);
    int arr[26]={0};
    int sum=0;
    vector<char> v;
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i]==' ' || s[i]==',')
            continue;
        arr[s[i]%97]=1;
        char ch=s[i];
        v.push_back(ch);
    } 
    for(int i=0;i<26;i++)
    {
       sum+=arr[i];
    }
   cout<<sum;

	return 0;
}