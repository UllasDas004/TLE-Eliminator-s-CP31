// Q = 1891B
// https://codeforces.com/problemset/problem/1891/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<ll> p(31,1);
    for(int i=1;i<31;i++) p[i] = (2 * p[i-1]);
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll> a(n);
        ll mx = LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mx = max(mx,a[i]);
        }
        int prev = 31;
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            if(x >= prev) continue;
            ll val = p[x];
            if(val > mx) continue;
            for(int j=0;j<n;j++)
            {
                if(a[j]%val == 0)
                a[j] += p[x-1];
            }
            prev = x;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}