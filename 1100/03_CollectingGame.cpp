// Q = 1904B
// https://codeforces.com/problemset/problem/1904/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<ll,int>> a(n);
        unordered_map<ll,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second = i;
            mp[a[i].first]++;
        }
        sort(a.begin(),a.end());
        vector<ll> pref(n);
        for(int i=0;i<n;i++)
        pref[i] = (a[i].first)*mp[a[i].first];
        for(int i=0;i<n;i++)
        {
            if(i > 0 && a[i].first != a[i-1].first)
            pref[i] += pref[i-1];
            else if(i > 0 && a[i].first == a[i-1].first)
            pref[i] = pref[i-1];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++) ans[i] = i;
        for(int i=n-2;i>=0;i--)
        {
            if(pref[i] >= a[i+1].first)
            ans[i] = ans[i+1];
        }
        vector<int> res(n);
        for(int i=0;i<n;i++) res[a[i].second] = ans[i];
        for(int i=0;i<n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}