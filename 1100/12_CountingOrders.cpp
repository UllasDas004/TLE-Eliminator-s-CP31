// Q = 1827A
// https://codeforces.com/problemset/problem/1827/A

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        ll ans = 1;
        for(int i=0;i<n;i++)
        {
            ll temp = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
            ll count = a.size() - temp;
            ans = ans * max(count - i,0LL) % MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}