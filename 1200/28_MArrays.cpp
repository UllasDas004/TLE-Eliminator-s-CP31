// Q = 1497B
// https://codeforces.com/problemset/problem/1497/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]%m]++;
        }
        ll ans = 0;
        if(mp[0] != 0)
        {
            ans++;
            mp.erase(0);
        }
        for(int i=1;2*i<=m;i++)
        {
            if(mp[i])
            {
                if(2*i == m) ans++;
                else if(mp[m-i])
                {
                    ll maxCount = max(mp[i],mp[m-i]);
                    ll minCount = min(mp[i],mp[m-i]);
                    ans++;
                    maxCount -= (minCount + 1);
                    ans += max((ll)0,maxCount);
                }
                else ans += mp[i];
            }
            else ans += mp[m-i];
        }
        cout<<ans<<endl;
    }
    return 0;
}