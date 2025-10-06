// Q = 1731B
// https://codeforces.com/problemset/problem/1731/B

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
        ll ans = n*(n+1) % MOD;
        ans = (ans*(ll)337) % MOD;
        ans = ((ans%MOD)*((4*n-1)%MOD))%MOD;
        cout<<ans<<endl;
    }
    return 0;
}