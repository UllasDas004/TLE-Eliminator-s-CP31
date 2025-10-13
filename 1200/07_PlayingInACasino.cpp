// Q = 1808B
// https://codeforces.com/problemset/problem/1808/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> a(m,vector<ll>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>a[j][i];
        }
        for(int i=0;i<m;i++)
        sort(a[i].begin(),a[i].end());
        ll ans = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans -= (a[i][j]*(n-j-1));
                ans += (a[i][j]*j);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}