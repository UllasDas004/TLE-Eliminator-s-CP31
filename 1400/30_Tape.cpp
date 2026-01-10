// Q = 1143C
// https://codeforces.com/problemset/problem/1143/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> diff(n-1);
        for(int i=0;i<n-1;i++) diff[i] = a[i+1] - a[i];
        sort(diff.begin(),diff.end());
        ll ans = 0;
        for(int i=0;i<n-k;i++) ans += diff[i];
        cout<<ans+k<<endl;
    }
    return 0;
}