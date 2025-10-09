// Q = 1631B
// https://codeforces.com/problemset/problem/1631/B

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9 + 7)
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
        for(int i=0;i<n;i++) cin>>a[i];
        int lo = 0,hi = n-2;
        ll x = a[n-1];
        while(hi >= 0 && a[hi] == x) hi--;
        while(lo < n && a[lo] == x) lo++;
        ll ans = 0,size = n - hi - 1;
        lo--;
        while(hi > lo)
        {
            ans++;
            size *= 2;
            hi = n - size - 1;
            while(hi > lo && a[hi] == x) hi--;
            size = n - hi - 1;
        }
        cout<<ans<<endl;
    }
    return 0;
}