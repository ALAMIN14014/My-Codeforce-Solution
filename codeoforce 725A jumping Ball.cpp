#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;


    long long i,n,m,res=0;

    cin>>n;
    cin>>a;

    for(i=0; i<n; i++)
    {
        if(a[i]=='<')
            res++;
        else
            break;
    }


    for(i=n-1; i>=0; i--)
    {
        if(a[i]=='>')
            res++;
        else
            break;
    }

    cout<<res<<endl;

return 0;

}


