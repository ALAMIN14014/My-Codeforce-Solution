#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,x,y,res,res1;
    cin>>a>>b>>x>>y;

    if((a-y==1||b-x==1)||(a==y||b==x))
        cout<<"YES"<<endl;

    else if(x>b||y>a)
    {
        res=a*2+2;
        res1=b*2+2;
        if((res>=y&&y>a)||(res1>=x&&x>b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    else
        cout<<"NO"<<endl;

    return 0;

}
