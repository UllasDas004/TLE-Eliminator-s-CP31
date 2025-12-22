// Q = 1119B
// https://codeforces.com/problemset/problem/1119/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll lo = 1,hi = n;
        while(lo <= hi)
        {
            ll mid = lo + (hi - lo) / 2;
            vector<ll> temp(mid);
            for(int i=0;i<mid;i++) temp[i] = a[i];
            sort(temp.rbegin(),temp.rend());
            ll height = 0;
            for(int i=0;i<mid;i+=2) height += temp[i];
            if(height <= h) lo = mid + 1;
            else hi = mid - 1;
        }
        cout<<hi<<endl;
    }
    return 0;
}