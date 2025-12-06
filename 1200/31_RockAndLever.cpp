// Q = 1420B
// https://codeforces.com/problemset/problem/1420/B

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
        map<int,ll> mp;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            int bitCount = 0;
            while(x > 0)
            {
                bitCount++;
                x /= 2;
            }
            mp[bitCount]++;
        }
        ll ans = 0;
        for(auto p : mp)
        {
            ll freq = p.second;
            ans += (freq*(freq-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}