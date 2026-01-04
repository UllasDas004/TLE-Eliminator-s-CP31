// Q = 1374D
// https://codeforces.com/problemset/problem/1374/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%k != 0) mp[k-a[i]%k]++;
        }
        ll ans = 0;
        for(auto p : mp)
        {
            ll rem = p.first,count = p.second;
            ll val = k*(count - 1) + (rem + 1);
            ans = max(ans,val);
        }
        cout<<ans<<endl;
    }
    return 0;
}