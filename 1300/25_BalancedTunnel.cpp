// Q = 1237B
// https://codeforces.com/problemset/problem/1237/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]] = i;
        }
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            b[mp[x]] = i;
        }
        ll ans = 0,mx = b[0];
        for(int i=1;i<n;i++)
        {
            if(b[i] < mx) ans++;
            mx = max(mx,b[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}