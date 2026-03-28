// Q = 1133D
// https://codeforces.com/problemset/problem/1133/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll gcd(ll x,ll y)
{
    ll min = x,max = y;
    if(y<x) 
    {
        min = y;
        max = x;
    }
    while(min>0)
    {
        ll temp = max % min;
        max = min;
        min = temp;
    }
    return max;
}
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        map<pair<ll,ll>,ll> mp;
        ll count = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
            {
                if(b[i] == 0) count++;
                continue;
            }
            if(b[i] == 0)
            {
                mp[{0,0}]++;
                continue;
            }
            ll g = gcd(abs(a[i]),abs(b[i]));
            if(a[i] * b[i] < 0) mp[{abs(b[i])/g,abs(a[i])/g}]++;
            else if(a[i] * b[i] > 0) mp[{-(abs(b[i])/g),abs(a[i])/g}]++;
        }
        ll ans = 0;
        for(auto p : mp) ans = max(ans,p.second);
        cout<<ans + count<<endl;
    }
    return 0;
}