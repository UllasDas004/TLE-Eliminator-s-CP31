// Q = 1872D
// https://codeforces.com/problemset/problem/1872/D

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
        ll nb = n*(n-1)/2;
        vector<ll> b(nb);
        map<ll,ll> mp;
        for(int i=0;i<nb;i++)
        {
            cin>>b[i];
            mp[b[i]]++;
        }
        vector<ll> a(n);
        ll i = 0;
        ll k = n - 1;
        for(auto p : mp)
        {
            ll num = p.first,count = p.second;
            while(count > 0)
            {
                a[i++] = num;
                count -= k;
                k--;
            }
        }
        for(;i<n;i++) a[i] = a[i-1];
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}