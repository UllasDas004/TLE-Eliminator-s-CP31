// Q = 1704B
// https://codeforces.com/problemset/problem/1704/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long> a(n);
        long long mx = INT_MIN,mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);
        }
        if(mx - mn <= x) cout<<0<<endl;
        else
        {
            int ans = 0;
            long long vl = a[0] - x,vr = a[0] + x;
            for(int i=1;i<n;i++)
            {
                long long nl = a[i] - x,nr = a[i] + x;
                if(vr < nl || nr < vl)
                {
                    ans++;
                    vl = nl;
                    vr = nr;
                }
                else
                {
                    vl = max(vl,nl);
                    vr = min(nr,vr);
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}