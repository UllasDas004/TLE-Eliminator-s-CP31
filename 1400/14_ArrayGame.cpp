// Q = 1904C
// https://codeforces.com/problemset/problem/1904/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(k >= 3)
        {
            cout<<0<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        ll mn = a[0];
        for(int i=1;i<n;i++) mn = min(mn,abs(a[i]-a[i-1]));
        if(k == 1)
        {
            cout<<mn<<endl;
            continue;
        }
        set<ll> diff;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                diff.insert(abs(a[i]-a[j]));
                mn = min(mn,abs(a[i]-a[j]));
            }
        }
        if(mn == 0)
        {
            cout<<0<<endl;
            continue;
        }
        for(auto& x : diff)
        {
            ll lo = 0,hi = n-1;
            while(lo <= hi)
            {
                ll mid = lo + (hi - lo) / 2;
                if(a[mid] >= x) hi = mid - 1;
                else lo = mid + 1;
            }
            lo = min(lo,n-1);
            hi = max(hi,0LL);
            mn = min(mn,abs(a[lo]-x));
            mn = min(mn,abs(a[hi]-x));
        }
        cout<<mn<<endl;
    }
    return 0;
}