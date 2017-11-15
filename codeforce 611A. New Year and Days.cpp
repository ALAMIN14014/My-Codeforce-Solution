#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,l;
    string a;
    cin>>n;
    getline(cin,a);

    l=a.length();
    if(a[l-1]=='k')
    {
        if(n==5||n==6)
            cout<<"53"<<endl;

        else
            cout<<"52"<<endl;
    }
    else
    {
        if(n==31)
            cout<<7<<endl;
        else if(n==30)
            cout<<"11"<<endl;
else
    cout<<"12"<<endl;

    }
    return 0;
}
