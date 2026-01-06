// Q = 1320A
// https://codeforces.com/problemset/problem/1320/A

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
        ll n;
        cin>>n;
        vector<ll> a(n);
        map<ll,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]-i].push_back(i);
        }
        ll ans = 0;
        for(auto& p : mp)
        {
            vector<int>& v = p.second;
            ll sum = 0;
            for(auto i : v) sum += a[i];
            ans = max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}