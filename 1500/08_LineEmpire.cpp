// Q = 1659C
// https://codeforces.com/problemset/problem/1659/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        vector<ll> v(n+1,0);
        ll sum = 0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            sum += v[i];
        }
        ll ans = LLONG_MAX;
        ll s = 0;
        for(int i=0;i<=n;i++)
        {
            ans = min(ans,a*v[i]+b*(sum-s-(n-i)*v[i]));
            s += v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}