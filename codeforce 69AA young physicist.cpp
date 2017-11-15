#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,a,b,c,res=0,res1=0,res2=0;
  cin>>n;
  for(i=1;i<=n;i++)
     {
          cin>>a>>b>>c;
          res+=a;
          res1+=b;
          res2+=c;
     }
     if(res==0&&res1==0&&res2==0)
          cout<<"YES";
     else
          cout<<"NO";
     return 0;
}
