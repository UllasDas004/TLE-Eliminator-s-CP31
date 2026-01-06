// Q = 1520E
// https://codeforces.com/problemset/problem/1520/E

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
        string s;
        cin>>n>>s;
        vector<ll> idx;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '*')
            idx.push_back(i);
        }
        ll ns = idx.size();
        if(ns <= 1)
        {
            cout<<0<<endl;
            continue;
        }
        ll mid = ns/2;
        ll midIdx = idx[mid];
        ll ans = 0;
        for(int i=0;i<ns;i++)
        ans += abs(idx[i] - abs(midIdx - (mid-i)));
        if(ns%2 == 0)
        {
            ll ans2 = 0;
            ll midIdx2 = idx[mid-1];
            for(int i=0;i<ns;i++)
            ans2 += abs(idx[i] - abs(midIdx2 - (mid-1-i)));
            ans = min(ans,ans2);
        }
        cout<<ans<<endl;
    }
    return 0;
}