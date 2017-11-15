#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[103],b[103],c;
    int m,n,i,j;
    cin>>n;
    //getchar();
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0&&b[j]=="rat")
                cout<<a[j]<<endl;
            else if(i==1&&(b[j]=="child"||b[j]=="woman"))
                cout<<a[j]<<endl;
            else if(i==2&&(b[j]=="man"))
                cout<<a[j]<<endl;

            else if(i==3&&(b[j]=="captain"))
                cout<<a[j]<<endl;


        }


    }


    return 0;
}
