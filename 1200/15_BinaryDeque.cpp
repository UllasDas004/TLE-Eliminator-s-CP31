// Q = 1692E
// https://codeforces.com/problemset/problem/1692/E

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        vector<ll> a(n),pref(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i == 0) pref[0] = a[0];
            else pref[i] = pref[i-1] + a[i];
        }
        if(pref[n-1] < s) cout<<-1<<endl;
        else if(pref[n-1] == s) cout<<0<<endl;
        else
        {
            ll sum = 0;
            s = pref[n-1] - s;
            ll ans = n;
            for(int i=n;i>=0;i--)
            {
                if(i < n && a[i] == 1) sum++;
                ll target = s - sum;
                if(target < 0) break;
                else if(target == 0)
                {
                    ans = min(ans,n-i);
                    break;
                }
                int lo = 0,hi = i-1;
                while(lo <= hi)
                {
                    int mid = lo + (hi - lo) / 2;
                    if(pref[mid] >= target) hi = mid - 1;
                    else lo = mid + 1;
                }
                ans = min(ans,n-i+lo+1);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}