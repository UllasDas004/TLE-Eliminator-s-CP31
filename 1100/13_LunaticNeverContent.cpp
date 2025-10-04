// Q = 1826B
// https://codeforces.com/problemset/problem/1826/B

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9+7)
using namespace std;
ll gcd(ll x,ll y)
{
    ll min = x,max = y;
    if(y<x) 
    {
        min  = y;
        max = x;
    }
    while(min>0)
    {
        int temp = max % min;
        max = min;
        min = temp;
    }
    return max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i > 0 && a[i] != a[i-1]) flag = false;
        }
        if(flag) cout<<0<<endl;
        else
        {
            vector<ll> diff((n+1)/2);
            for(int i=0,j=n-1;i<j;i++,j--)
            diff[i] = abs(a[i] - a[j]);
            ll g = diff[0];
            for(int i=1;i<(n+1)/2;i++)
            g = gcd(g,diff[i]);
            cout<<g<<endl;
        }
    }
    return 0;
}