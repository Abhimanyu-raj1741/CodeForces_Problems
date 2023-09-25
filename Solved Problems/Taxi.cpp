    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     
        int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
    cin>>v[i];

unordered_map<int,int> u;
for(auto i:v)
   u[i]++;

int cnt=0;

cnt+= u[4];
cnt += u[3];

if(u[3]>=u[1])
    u[1]=0;
else
    u[1]-=u[3];

cnt += u[2]/2;
u[2] = u[2]%2;

cnt+= u[1]/4;
u[1] = u[1]%4;

// max 2p = 1, max 1p = 3,2,1
if(u[2]==1){
  cnt++;
  if(u[1]==3)
     cnt++;
}else if(u[1]>0)
   cnt++;



cout<<cnt<<endl;
      return 0;
    }

