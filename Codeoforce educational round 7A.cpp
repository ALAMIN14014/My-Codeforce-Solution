#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,pos=3,cnt=2;
    cin>>n;
    n--;
    for(i=1;i<=n;i++)
    {
     n-=i;
     //cout<<n<<endl;
    }


    cout<<n+1<<endl;
return 0;
}
