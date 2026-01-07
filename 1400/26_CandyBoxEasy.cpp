// Q = 1183D
// https://codeforces.com/problemset/problem/1183/D

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
        ll n;
        cin>>n;
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        vector<ll> freq;
        for(auto p : mp) freq.push_back(p.second);
        sort(freq.rbegin(),freq.rend());
        ll ans = freq[0],count = freq[0]-1;
        for(int i=1;i<freq.size();i++)
        {
            if(count == 0) break;
            ll c = min(freq[i],count);
            ans += c;
            count = c-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}