// Q = 276C
// https://codeforces.com/problemset/problem/276/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n),pref(n+1,0);
        for(int i=0;i<n;i++) cin>>a[i];
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            pref[l]++;
            pref[r+1]--;
        }
        for(int i=1;i<=n;i++) pref[i] += pref[i-1];
        sort(pref.rbegin(),pref.rend());
        sort(a.rbegin(),a.rend());
        ll ans = 0;
        for(int i=0;i<n;i++) ans += (a[i]*pref[i]);
        cout<<ans<<endl;
    }
    return 0;
}