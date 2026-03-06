// Q = 1416A
// https://codeforces.com/problemset/problem/1416/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<vector<ll>> idx(n+1);
        bool allEqual = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i > 0 && a[i] != a[i-1]) allEqual = false;
            idx[a[i]].push_back(i);
        }
        if(allEqual)
        {
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
            continue;
        }
        vector<ll> ans(n,INT_MAX);
        for(int i=1;i<=n;i++)
        {
            if(idx[i].size() == 0) continue;
            int ni = idx[i].size();
            ll mx = idx[i][0]+1;
            for(int j=1;j<ni;j++) mx = max(mx,idx[i][j]-idx[i][j-1]);
            mx = max(mx,n-idx[i][ni-1]);
            // cout<<mx<<" ";
            ans[mx-1] = min(ans[mx-1],(ll)i);
        }
        // cout<<endl;
        for(int i=1;i<n;i++)
        ans[i] = min(ans[i],ans[i-1]);
        for(int i=0;i<n;i++)
        {
            if(ans[i] == INT_MAX) cout<<-1<<" ";
            else cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}