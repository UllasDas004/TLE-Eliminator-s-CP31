// Q = 1618C
// https://codeforces.com/problemset/problem/1618/C

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9 + 7)
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
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll g1 = a[0],g2 = a[1];
        for(int i=2;i<n;i++)
        {
            if(i%2 == 0) g1 = gcd(g1,a[i]);
            else g2 = gcd(g2,a[i]);
        }
        if(g1 == g2) cout<<0<<endl;
        else
        {
            bool flag1 = true,flag2 = true;
            for(int i=0;i<n;i++)
            {
                if(i%2 == 0)
                {
                    if(a[i]%g2 == 0)
                    flag1 = false;
                }
                else
                {
                    if(a[i]%g1 == 0)
                    flag2 = false;
                }
            }
            if(flag1) cout<<g2<<endl;
            else if(flag2) cout<<g1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}