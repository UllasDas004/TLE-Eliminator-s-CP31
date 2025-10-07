// Q = 1669F
// https://codeforces.com/problemset/problem/1669/F

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
        vector<ll> a(n),pref(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i == 0) pref[0] = a[0];
            else pref[i] = a[i] + pref[i-1];
        }
        ll ans = 0,sum = 0;
        for(int i=n-1;i>0;i--)
        {
            sum += a[i];
            int lo = 0,hi = i-1;
            while(lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if(sum == pref[mid])
                {
                    ans = max(ans,(ll)(n-i+mid+1));
                    break;
                }
                else if(pref[mid] < sum) lo = mid + 1;
                else hi = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}