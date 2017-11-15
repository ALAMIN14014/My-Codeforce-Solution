#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,b,c,res=0;
  cin>>n;
  for(i=1;i<=n;i++)
     {
          cin>>a>>b>>c;
          res+=a+b+c;
     }
     if(res==0)
          cout<<"YES";
     else
          cout<<"NO";
     return 0;
}
