// Q = 1679B
// https://codeforces.com/problemset/problem/1679/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++) a[i] += a[i-1];
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ll diff = x - a[i];
            if(diff < 0) break;
            ans += (diff/(i+1) + 1);
        }
        cout<<ans<<endl;
    }
    return 0;
}