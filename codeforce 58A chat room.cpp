#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,l,flag=0;
    cin>>a;
    l=a.length();

    for(i=0; i<l; i++)
    {
        if(a[i]=='h'&&flag==0)
        {
            flag=1;
        }
        else if(a[i]=='e'&&flag==1)
        {
            flag=2;
        }
        else if(a[i]=='l'&&flag==2)
        {
            flag=3;
        }
        else if(a[i]=='l'&&flag==3)
        {
            flag=4;
        }
        else if(a[i]=='o'&&flag==4)
        {
            flag=5;
        }

    }

    if(flag==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
