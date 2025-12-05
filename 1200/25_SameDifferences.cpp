// Q = 1520D
// https://codeforces.com/problemset/problem/1520/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i] - (i+1)]++;
        }
        ll ans = 0;
        for(auto p : mp)
        {
            ll freq = p.second;
            ans += (freq*(freq-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}