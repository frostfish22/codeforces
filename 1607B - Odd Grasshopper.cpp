#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5+10,maxn=32;
string a1,a2;
map<char,int>s;

int main()
{
    int T;cin>>T;
    while(T--)
    {
        ll x,y;cin>>x>>y;
        ll s,w;
        if(abs(x)&1)
        {
            s=y%4;
            if(s==0)cout<<x<<endl;
            if(s==1)cout<<x+y<<endl;
            if(s==2)cout<<x-1<<endl;
            if(s==3)cout<<x-y-1<<endl;

        }
        else
        {
            s=y%4;
            if(s==0)cout<<x<<endl;
            if(s==1)cout<<x-y<<endl;
            if(s==2)cout<<x+1<<endl;
            if(s==3)cout<<x+y+1<<endl;
        }
    }

    return 0;
}

