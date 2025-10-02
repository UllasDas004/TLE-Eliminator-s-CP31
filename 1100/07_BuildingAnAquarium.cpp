// Q = 1873E
// https://codeforces.com/problemset/problem/1873/E

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
        ll sum = 0,mn = INT_MAX,mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
            mx = max(mx,a[i]);
            mn = min(mn,a[i]);
        }
        ll w = mx*n - sum;
        if(w == x) cout<<mx<<endl;
        else if(w < x)
        {
            x -= w;
            ll h = mx + x/n;
            cout<<h<<endl;
        }
        else
        {
            ll lo = mn,hi = mx;
            while(lo <= hi)
            {
                ll mid = lo + (hi - lo)/2;
                ll w = 0;
                for(int i=0;i<n;i++)
                {
                    if(a[i] < mid)
                    w += (mid - a[i]);
                }
                if(w == x) break;
                else if(w < x) lo = mid + 1;
                else hi = mid - 1;
            }
            cout<<((lo > hi) ? hi : lo + (hi - lo)/2)<<endl;
        }
    }
    return 0;
}