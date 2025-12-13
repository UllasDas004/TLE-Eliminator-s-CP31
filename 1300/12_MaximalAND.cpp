// Q = 1669H
// https://codeforces.com/problemset/problem/1669/H

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n),bitCount(31,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ll p = a[i];
            for(int i=0;i<31;i++)
            {
                if(p%2 == 1) bitCount[i]++;
                p /= 2;
            }
        }
        for(int i=30;i>=0;i--)
        {
            ll count = bitCount[i];
            if(n - count <= k)
            {
                bitCount[i] = n;
                k -= (n - count);
            }
        }
        ll ans = 0;
        for(int i=0;i<31;i++)
        {
            if(bitCount[i] == n)
            ans += (1LL << i);
        }
        cout<<ans<<endl;
    }
    return 0;
}