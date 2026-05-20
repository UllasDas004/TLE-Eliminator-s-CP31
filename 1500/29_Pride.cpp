// Q = 891A
// https://codeforces.com/problemset/problem/891/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
ll gcd(ll x,ll y)
{
    ll min = x,max = y;
    if(x > y) swap(x,y);
    if(y<x) 
    {
        min = y;
        max = x;
    }
    while(min>0)
    {
        ll temp = max % min;
        max = min;
        min = temp;
    }
    return max;
}
int main()
{
    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll count = (a[0] == 1 ? 1 : 0);
        ll g = a[0];
        for(int i=1;i<n;i++)
        {
            g = gcd(g,a[i]);
            if(a[i] == 1) count++;
        }
        if(g > 1) cout<<-1<<endl;
        else if(count) cout<<n-count<<endl;
        else
        {
            ll ans = INT_MAX;
            for(ll i=0;i<n;i++)
            {
                g = a[i];
                for(ll j=i+1;j<n;j++)
                {
                    g = gcd(g,a[j]);
                    if(g == 1) ans = min(ans,n-1+(j-i));
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}