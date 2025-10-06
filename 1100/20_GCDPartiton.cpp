// Q = 1780B
// https://codeforces.com/problemset/problem/1780/B

#include<bits/stdc++.h>
#define ll long long
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
        ll temp = max % min;
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
        vector<ll> a(n),pref(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i == 0) pref[0] = a[0];
            else pref[i] = a[i] + pref[i-1];
        }
        ll mx = INT_MIN;
        for(int i=0;i<n-1;i++)
        mx = max(mx,gcd(pref[i],pref[n-1] - pref[i]));
        cout<<mx<<endl;
    }
    return 0;
}