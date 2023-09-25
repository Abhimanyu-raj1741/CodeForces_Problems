#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        string s;
        cin>>s;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]!='0')
            {
                int last=len-i-1;

                int num=(s[i]-'0')*pow(10,last);
                v.push_back(num);

            }
        }
           
           cout<<v.size()<<endl;
           for(auto i:v)
            cout<<i<<" ";
        cout<<endl;

    }   


   



	return 0;
}