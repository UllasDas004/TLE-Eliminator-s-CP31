// Q = 1742D
// https://codeforces.com/problemset/problem/1742/D

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
        vector<ll> a(1001,-1);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[x] = i;
        }
        ll ans = -3;
        for(int i=0;i<1001;i++)
        {
            for(int j=i;j<1001;j++)
            {
                if(a[i] != -1 && a[j] != -1 && gcd(i,j) == 1)
                ans = max(ans,a[i]+a[j]);
            }
        }
        cout<<ans+2<<endl;
    }
    return 0;
}