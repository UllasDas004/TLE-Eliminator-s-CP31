// Q = 1648A
// https://codeforces.com/problemset/problem/1648/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<vector<ll>>> a(100000,vector<vector<ll>>(2));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll x;
                cin>>x;
                x--;
                a[x][0].push_back(i);
                a[x][1].push_back(j);
            }
        }
        ll ans = 0;
        for(int c=0;c<100000;c++)
        {
            sort(a[c][0].rbegin(),a[c][0].rend());
            sort(a[c][1].rbegin(),a[c][1].rend());
            ll sum = 0;
            ll k = a[c][0].size();
            for(int i=0,j=k-1;i<k;i++,j-=2)
            sum += 1LL * j * a[c][0][i];
            for(int i=0,j=k-1;i<k;i++,j-=2)
            sum += 1LL * j * a[c][1][i];
            ans += sum;
        }
        cout<<ans<<endl;
    }
    return 0;
}