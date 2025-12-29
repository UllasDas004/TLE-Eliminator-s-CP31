// Q = 1878E
// https://codeforces.com/problemset/problem/1878/E

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
        vector<vector<ll>> bits(n,vector<ll>(31,0));
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ll x = a[i];
            for(int j=0;j<31;j++)
            {
                if(x%2 == 1) bits[i][j]++;
                x /= 2;
            }
            if(i > 0)
            {
                for(int j=0;j<31;j++)
                bits[i][j] += bits[i-1][j];
            }
        }
        ll q;
        cin>>q;
        vector<ll> ans(q);
        for(int qq=0;qq<q;qq++)
        {
            ll l,kk;
            cin>>l>>kk;
            l--;
            vector<ll> k(31,0);
            for(int i=0;i<31;i++)
            {
                if(kk%2 == 1) k[i]++;
                kk /= 2;
            }
            ll lo = l,hi = n-1;
            while(lo <= hi)
            {
                ll mid = lo + (hi - lo) / 2;
                ll kBit = 0,curr = 0;
                for(int i=30;i>=0;i--)
                {
                    kBit += k[i];
                    ll bit = bits[mid][i];
                    if(l > 0) bit -= bits[l-1][i];
                    if(bit == mid-l+1) curr++;
                    if(curr > kBit) // current number > k
                    {
                        lo = mid + 1;
                        break;
                    }
                    else if(curr < kBit) // current number < k
                    {
                        hi = mid - 1;
                        break;
                    }
                }
                if(curr == kBit) lo = mid + 1;
            }
            if(hi < l) ans[qq] = -1;
            else ans[qq] = hi+1;
        }
        for(int i=0;i<q;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}