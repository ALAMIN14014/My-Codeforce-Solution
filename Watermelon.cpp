#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res;
    cin>>n;
    if(n==2||n==1)
    {
        cout<<"NO"<<endl;

    }
    else
    {
        res=n-2;
        if(res%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;

}
