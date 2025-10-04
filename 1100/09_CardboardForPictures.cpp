// Q = 1850E
// https://codeforces.com/problemset/problem/1850/E

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll> s(n);
        for(int i=0;i<n;i++) cin>>s[i];
        ll l = 1,r = 1e9,ans = -1;
        while(l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll sum = 0;
            for(int i=0;i<n;i++)
            {
                sum += ((s[i] + 2*mid) * (s[i] + 2*mid));
                if(sum > c) break;
            }
            if(sum <= c)
            {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout<<ans<<endl;
    }
    return 0;
}