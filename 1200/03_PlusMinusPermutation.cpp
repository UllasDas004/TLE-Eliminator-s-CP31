// Q = 1872D
// https://codeforces.com/problemset/problem/1872/D

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
        ll n,x,y;
        cin>>n>>x>>y;
        ll xc = n/x,yc = n/y;
        ll g = gcd(x,y);
        ll l = (x*y)/g;
        ll c = n/l;
        xc -= c;
        yc -= c;
        ll yy = yc*(yc+1LL)/2;
        ll xx = n*(n+1LL)/2 - (n-xc)*(n-xc+1)/2;
        ll ans = xx - yy;
        cout<<ans<<endl;
    }
    return 0;
}