// Q = 1832B
// https://codeforces.com/problemset/problem/1832/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,l;
        cin>>n>>l;
        vector<ll> a(n),pref(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        pref[0] = a[0];
        for(int i=1;i<n;i++) pref[i] = a[i] + pref[i-1];
        ll ans = 0;
        for(int i=0;i<=l;i++)
        {
            int j = l - i;
            int left = 2 * i;
            int right = n - j - 1;
            ll sum = pref[right] - (left == 0 ? 0 : pref[left-1]);
            ans = max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}