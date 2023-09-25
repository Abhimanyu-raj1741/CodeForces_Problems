#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    	string s;
    	cin>>s;
    	int cntb=0;
    	if(s.length()%2!=0)
    		cout<<"NO"<<endl;
    	else
    	{
          for(int i=0;i<s.length();i++)
    	{
    		
    		if(s[i]=='B' )
    			cntb++;
    	 }
    	if(cntb==s.length()/2)
    		cout<<"YES"<<endl;
    	else 
    	     cout<<"NO"<<endl;

    	}
    	
    	
    	
    }

    /*
    #include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (count(s.begin(), s.end(), 'B') * 2 == s.size() ?
                 "YES\n" : "NO\n");
    }
}
    */




	return 0;
}