// Q = 1323B
// https://codeforces.com/problemset/problem/1323/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        map<ll,ll> mpa,mpb;
        ll count = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x == 1) count++;
            else
            {
                if(count) mpa[count]++;
                count = 0;
            }
        }
        if(count) mpa[count]++;
        count = 0;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            if(x == 1) count++;
            else
            {
                if(count) mpb[count]++;
                count = 0;
            }
        }
        if(count) mpb[count]++;
        ll ans = 0;
        for(ll i=1;i*i<=k;i++)
        {
            if(k%i != 0) continue;
            ll a = i,b = k/i;
            ll ca = 0,cb = 0;
            for(auto p : mpa)
            {
                if(p.first >= a)
                ca += (p.first - a + 1) * p.second;
            }
            for(auto p : mpb)
            {
                if(p.first >= b)
                cb += (p.first - b + 1) * p.second;
            }
            ans += (ca * cb);
            if(i*i == k) continue;
            ca = 0;
            cb = 0;
            swap(a,b);
            for(auto p : mpa)
            {
                if(p.first >= a)
                ca += (p.first - a + 1) * p.second;
            }
            for(auto p : mpb)
            {
                if(p.first >= b)
                cb += (p.first - b + 1) * p.second;
            }
            ans += (ca * cb);
        }
        cout<<ans<<endl;
    }
    return 0;
}