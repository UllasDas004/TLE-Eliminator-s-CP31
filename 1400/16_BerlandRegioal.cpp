// Q = 1519C
// https://codeforces.com/problemset/problem/1519/C

#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(const vector<ll>& a,const vector<ll>& b)
{
    return a.size() > b.size();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> u(n);
        ll mx = 0;
        for(int i=0;i<n;i++)
        {
            cin>>u[i];
            mx = max(mx,u[i]);
        }
        vector<vector<ll>> a(mx+1);
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a[u[i]].push_back(x);
        }
        ll maxSize = 0;
        for(auto& v : a)
        {
            sort(v.rbegin(),v.rend());
            maxSize = max(maxSize,(ll)v.size());
            for(int j=1;j<v.size();j++)
            v[j] += v[j-1];
        }
        sort(a.begin(),a.end(),cmp);
        while(a.size() && a.back().size() == 0) a.pop_back();
        int k;
        for(k=1;k<=n;k++)
        {
            if(k > maxSize) break;
            ll sum = 0;
            for(auto& v : a)
            {
                ll nv = v.size();
                if(nv < k) break;
                ll m = (nv/k)*k;
                sum += v[m-1];
            }
            cout<<sum<<" ";
        }
        for(;k<=n;k++) cout<<0<<" ";
        cout<<endl;
    }
    return 0;
}