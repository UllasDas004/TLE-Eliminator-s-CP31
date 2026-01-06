// Q = 1771B
// https://codeforces.com/problemset/problem/1771/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n,n);
        for(int i=0;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            x--;y--;
            if(x > y) swap(x,y);
            a[x] = min(a[x],y);
        }
        for(int i=n-2;i>=0;i--) a[i] = min(a[i],a[i+1]);
        ll ans = (n*(n+1))/2;
        for(int i=0;i<n;i++)
        ans -= (n - a[i]);
        cout<<ans<<endl;
    }
    return 0;
}