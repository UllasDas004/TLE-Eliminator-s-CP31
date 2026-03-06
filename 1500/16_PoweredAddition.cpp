// Q = 1338A
// https://codeforces.com/problemset/problem/1338/A

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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll mx = 0;
        for(int i=1;i<n;i++)
        {
            if(a[i-1] <= a[i]) continue;
            mx = max(mx,a[i-1]-a[i]);
            a[i] = a[i-1];
        }
        cout<<(mx == 0 ? 0 : (ll)log2(mx) + 1)<<endl;
    }
    return 0;
}