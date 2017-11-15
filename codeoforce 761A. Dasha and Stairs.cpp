#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,x,even=0,odd=0,i;
   cin>>a>>b;
    x=abs(a-b);
    if(a==0&&b==0)
        cout<<"NO"<<endl;
    else if(x==0||x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  return 0;
}
