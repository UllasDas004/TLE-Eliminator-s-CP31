// Q = 1891C
// https://codeforces.com/problemset/problem/1891/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,sum = 0;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        sort(a.rbegin(),a.rend());
        ll ans = sum - sum/2;
        ll rem = sum/2;
        for(int i=0;i<n;i++)
        {
            if(rem <= 0) break;
            rem -= a[i];
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}