// Q = 1612C
// https://codeforces.com/problemset/problem/1612/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll k,x;
        cin>>k>>x;
        if(k*k <= x)
        {
            cout<<(2*k - 1)<<endl;
            continue;
        }
        ll m = (k*(k+1))/2;
        ll ans = k;
        if(m == x) cout<<k<<endl;
        else if(m > x)
        {
            ll lo = 1,hi = k;
            while(lo <= hi)
            {
                ll mid = lo + (hi-lo)/2;
                ll p = (mid*(mid+1))/2;
                if(p < x) lo = mid + 1;
                else hi = mid - 1;
            }
            cout<<lo<<endl;
        }
        else
        {
            ll need = x - m,mm = m - k;;
            ll lo = 1,hi = k-1;
            while(lo <= hi)
            {
                ll mid = lo + (hi-lo)/2;
                ll p = mm - (mid*(mid+1))/2;
                if(p >= need) lo = mid + 1;
                else hi = mid - 1;
            }
            cout<<2*k-lo<<endl;
        }
    }
    return 0;
}