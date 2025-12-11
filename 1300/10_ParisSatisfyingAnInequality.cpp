// Q = 1794C
// https://codeforces.com/problemset/problem/1794/C

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
        vector<vector<ll>> a;
        ll mx = 0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x < i+1)
            {
                a.push_back({x,i+1});
                mx = max(mx,x);
            }
        }
        vector<ll> pref(mx+1,0);
        n = a.size();
        for(int i=0;i<n;i++) pref[a[i][0]]++;
        for(int i=2;i<=mx;i++) pref[i] += pref[i-1];
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ll idx = a[i][1];
            if(idx > mx) break;
            ans += (pref[mx] - pref[idx]);
        }
        cout<<ans<<endl;
    }
    return 0;
}