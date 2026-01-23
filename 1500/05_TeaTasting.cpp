// Q = 1795C
// https://codeforces.com/problemset/problem/1795/C

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
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<ll> bs(n+1,0);
        for(int i=n-1;i>=0;i--) bs[i] = bs[i+1]+b[i];
        vector<ll> count(n+1,0),r(n+1,0);
        for(int i=0;i<n;i++)
        {
            int lo = i+1,hi = n;
            while(lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if(bs[i]-bs[mid] <= a[i]) lo = mid + 1;
                else hi = mid - 1;
            }
            if(i <= hi) count[i]++;
            count[hi]--;
            r[hi] += (a[i]-(bs[i]-bs[hi]));
        }
        // for(int i=0;i<n;i++) cout<<count[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++) cout<<r[i]<<" ";
        // cout<<endl;
        for(int i=1;i<n;i++) count[i] += count[i-1];
        for(int i=0;i<n;i++)
        {
            ll ans = count[i]*b[i] + r[i];
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}