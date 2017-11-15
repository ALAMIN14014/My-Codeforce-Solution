#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1005][6];
    int n,i,j,res,f=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>ch[i][j];

        }
    }

for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(ch[i][0]=='O'&&ch[i][1]=='O'&&f==0)
            {
                ch[i][0]='+';
                ch[i][1]='+';
                f=1;
            }
            else if(ch[i][3]=='O'&&ch[i][4]=='O'&&f==0)
            {
                ch[i][3]='+';
                ch[i][4]='+';
                f=1;
            }

        }
    }






    if(f==1)
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
                cout<<ch[i][j];

            cout<<endl;
        }


    }
    else
        cout<<"NO"<<endl;


    return 0;
}
