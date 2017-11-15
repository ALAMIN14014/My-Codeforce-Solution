#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l,c=0,cnt=0;
    cin>>a;
    l=a.size();

    for(i=0; i<l; i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            c++;
        else if(a[i]>='A'&&a[i]<='Z')
            cnt++;
    }
    char ch;
    if(c>=cnt)
    {
        for(i=0; i<l; i++)
        {
            ch=a[i];
            putchar(tolower(ch));
        }


    }
    else
    {
        for(i=0; i<l; i++)
        {
            ch=a[i];
            putchar(toupper(ch));
        }



    }


    return 0;
}
