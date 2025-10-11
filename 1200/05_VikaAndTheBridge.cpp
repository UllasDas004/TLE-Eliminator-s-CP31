// Q = 1848B
// https://codeforces.com/problemset/problem/1848/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]].push_back(i);
        }
        int mn = INT_MAX;
        for(auto p : mp)
        {
            auto& v = p.second;
            ll nv = v.size();
            v.push_back(n-v[nv-1]-1);
            for(int i=nv-1;i>=1;i--)
            v[i] -= (v[i-1] + 1);
            sort(v.begin(),v.end());
            int mx = v[nv];
            v[nv] = mx/2;
            v.push_back((mx-1)/2);
            nv += 2;
            mx = 0;
            for(int i=0;i<nv;i++) mx = max(mx,v[i]);
            mn = min(mn,mx);
        }
        cout<<mn<<endl;
    }
    return 0;
}