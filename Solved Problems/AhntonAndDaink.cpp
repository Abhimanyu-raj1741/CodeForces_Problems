#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a;
    int count1=0;
    int count2=0;
    cin>>a;
    string s;
    cin>>s;
    for(int i=0;i<a;i++)
    {
    	if(s[i]=='A')
    	{
    		count1++;

    	}
    	else if(s[i]=='D')
    	{
    		count2++;
    	}
    }

if(count1>count2)
{
	cout<<"Anton";

}
else if(count1<count2)
{
	cout<<"Danik";
}
else if(count1==count2)
{
	cout<<"Friendship";
}

	return 0;
}