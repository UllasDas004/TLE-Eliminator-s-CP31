// Q = 1742E
// https://codeforces.com/problemset/problem/1742/E

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n),pref(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll mx = a[0];
        pref[0] = a[0];
        for(int i=1;i<n;i++)
        {
            pref[i] = pref[i-1] + a[i];
            mx = max(mx,a[i]);
            a[i] = mx;
        }
        for(int i=0;i<q;i++)
        {
            ll k;
            cin>>k;
            ll lo = 0,hi = n-1;
            while(lo <= hi)
            {
                ll mid = lo + (hi - lo) / 2;
                if(a[mid] <= k) lo = mid + 1;
                else hi = mid - 1;
            }
            if(hi == -1) cout<<0<<" ";
            else cout<<pref[hi]<<" ";
        }
        cout<<endl;
    }
    return 0;
}