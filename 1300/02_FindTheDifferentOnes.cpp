// Q = 1927D
// https://codeforces.com/problemset/problem/1927/D

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
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> prev_diff(n,-1);
        ll prev = -1;
        for(int i=1;i<n;i++)
        {
            if(a[i] != a[i-1])
            prev = i-1;
            prev_diff[i] = prev;
        }
        ll q;
        cin>>q;
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            if(prev_diff[r] >= l)
            cout<<r+1<<" "<<prev_diff[r]+1<<endl;
            else
            cout<<"-1 -1"<<endl;
        }
        cout<<endl;
    }
    return 0;
}