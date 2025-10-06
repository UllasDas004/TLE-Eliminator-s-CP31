// Q = 1682B
// https://codeforces.com/problemset/problem/1682/B

#include<bits/stdc++.h>
#define ll long long
#define MOD (ll)(1e9 + 7)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll ans = -1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] != i)
            {
                if(ans == -1) ans = a[i];
                else ans &= a[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}