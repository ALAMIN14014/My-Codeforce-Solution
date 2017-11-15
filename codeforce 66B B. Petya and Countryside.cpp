#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1005],m,n,i,j,res=1,maxi=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        res=1;
        for(j=i; j<n-1; j++)
        {
            if(a[j]>=a[j+1])
            {


                res++;


            }
            else
            {
                break;
            }
        }
        //cout<<res<<endl;
        for(int k=i; k>0; k--)
        {
            if(a[k]>=a[k-1])
            {


                res++;

            }
            else
            {
                break;
            }
        }
       // cout<<res<<endl;
        maxi=max(res,maxi);


    }

    cout<<maxi<<endl;

    return 0;
}

