// Q = 1872E
// https://codeforces.com/problemset/problem/1872/E

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
        string s;
        cin>>s;
        vector<ll> pref0(n+1,0),pref1(n+1,0);
        for(int i=1;i<=n;i++)
        {
            if(s[i-1] == '1')
            {
                pref1[i] = pref1[i-1] ^ a[i-1];
                pref0[i] = pref0[i-1];
            }
            else
            {
                pref0[i] = pref0[i-1] ^ a[i-1];
                pref1[i] = pref1[i-1];
            }
        }
        // for(int i=1;i<=n;i++) cout<<pref1[i]<<" ";
        // cout<<endl;
        // for(int i=1;i<=n;i++) cout<<pref0[i]<<" ";
        // cout<<endl;
        ll q;
        ll x0 = pref0[n],x1 = pref1[n];
        cin>>q;
        while(q--)
        {
            int op;
            cin>>op;
            if(op == 1)
            {
                int l,r;
                cin>>l>>r;
                x0 ^= ((pref0[r]^pref0[l-1]) ^ (pref1[r]^pref1[l-1]));
                x1 ^= ((pref0[r]^pref0[l-1]) ^ (pref1[r]^pref1[l-1]));
            }
            else
            {
                int g;
                cin>>g;
                if(g == 0) cout<<x0<<endl;
                else cout<<x1<<endl;
            }
        }
    }
    return 0;
}