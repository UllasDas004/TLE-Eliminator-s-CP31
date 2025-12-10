// Q = 1857D
// https://codeforces.com/problemset/problem/1857/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 998244353
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<pair<ll,ll>> diff(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            diff[i] = {a[i]-x,i+1};
        }
        sort(diff.rbegin(),diff.rend());
        vector<ll> ans;
        ans.push_back(diff[0].second);
        for(int i=1;i<n;i++)
        {
            if(diff[i].first == diff[0].first)
            ans.push_back(diff[i].second);
            else break;
        }
        n = ans.size();
        sort(ans.begin(),ans.end());
        cout<<n<<endl;
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}