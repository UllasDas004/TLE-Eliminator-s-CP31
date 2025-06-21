// Q = 1807D
// https://codeforces.com/problemset/problem/1807/D

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n + 1);
        vector<ll> prefix(n + 1);
        a[0] = prefix[0] = 0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            prefix[i] = prefix[i-1] + a[i];
        }
        ll total = prefix[n];
        for(int i=1;i<=q;i++)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            ll sum = total - (prefix[r] - prefix[l - 1]) + k * (r - l + 1);
            if(sum%2 == 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl; 
        }
    }
    return 0;
}