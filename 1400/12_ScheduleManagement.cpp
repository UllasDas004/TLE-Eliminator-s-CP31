// Q = 1701C
// https://codeforces.com/problemset/problem/1701/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(m),freq(n,0);
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            freq[a[i]-1]++;
        }
        ll lo = 0,hi = 2*m;
        while(lo < hi)
        {
            ll mid = lo + (hi - lo) / 2;
            ll mx = 0;
            for(int i=0;i<n;i++)
            {
                if(mid < freq[i]) mx += mid;
                else mx += freq[i] + (mid - freq[i]) / 2;
            }
            if(mx >= m) hi = mid;
            else lo = mid + 1;
        }
        cout<<lo<<endl;
    }
    return 0;
}