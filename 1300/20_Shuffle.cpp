// Q = 1366B
// https://codeforces.com/problemset/problem/1366/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,m;
        cin>>n>>x>>m;
        ll l = x,r = x;
        for(int i=1;i<=m;i++)
        {
            ll lo,hi;
            cin>>lo>>hi;
            if(hi < l || lo > r) continue;
            l = min(l,lo);
            r = max(r,hi);
        }
        ll ans = (r-l+1);
        cout<<ans<<endl;
    }
    return 0;
}