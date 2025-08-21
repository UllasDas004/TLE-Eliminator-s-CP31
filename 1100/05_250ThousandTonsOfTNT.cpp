// Q = 1899B
// https://codeforces.com/problemset/problem/1899/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> pref(n);
        pref[0] = a[0];
        for(int i=1;i<n;i++) pref[i] = pref[i-1] + a[i];
        ll ans = 0;
        for(int k=1;k<=n;k++)
        {
            if(n%k != 0) continue;
            ll mx = LLONG_MIN,mn = LLONG_MAX;
            for(int i=0,j=k-1;j<n;i+=k,j+=k)
            {
                ll diff;
                if(i == 0) diff = abs(pref[j]);
                else diff = abs(pref[j] - pref[i-1]);
                mx = max(mx,diff);
                mn = min(mn,diff);
                ans = max(ans,abs(mx-mn));
            }
        }
        cout<<ans<<endl;
    }
}