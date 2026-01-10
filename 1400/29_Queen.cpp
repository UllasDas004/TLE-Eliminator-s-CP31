// Q = 1143C
// https://codeforces.com/problemset/problem/1143/c

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll root;
        vector<int> r(n+1);
        vector<vector<ll>> graph(n+1);
        for(int i=1;i<=n;i++)
        {
            ll u;
            cin>>u>>r[i];
            if(u == -1) root = i;
            else graph[u].push_back(i);
        }
        vector<ll> ans;
        queue<ll> q;
        q.push(root);
        while(q.size())
        {
            ll curr = q.front();
            q.pop();
            bool flag = true;
            if(r[curr] == 0) flag = false;
            for(auto child : graph[curr])
            {
                if(r[child] == 0) flag = false;
                q.push(child);
            }
            if(flag) ans.push_back(curr);
        }
        if(ans.size() == 0)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}