// Q = 1919C
// https://codeforces.com/problemset/problem/1919/C

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
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll ans = 0;
        ll x = INT_MAX,y = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(x > y) swap(x,y);
            if(a[i] <= x) x = a[i];
            else if(a[i] <= y) y = a[i];
            else
            {
                ans++;
                x = a[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}