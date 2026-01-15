// Q = 1876A
// https://codeforces.com/problemset/problem/1876/A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(const vector<ll>& a,const vector<ll>& b)
{
    if(a[1] != b[1]) return a[1] < b[1];
    else return a[0] > b[0];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while (t--)
    {
        ll n,p;
        cin>>n>>p;
        vector<vector<ll>> a(n,vector<ll>(2));
        for(int i=0;i<n;i++) cin>>a[i][0];
        for(int i=0;i<n;i++) cin>>a[i][1];
        sort(a.begin(),a.end(),cmp);
        ll count = n-1,ans = p;
        for(int i=0;i<n;i++)
        {
            if(count == 0) break;
            if(a[i][1] > p)
            {
                ans += count*p;
                break;
            }
            ans += min(a[i][0],count)*a[i][1];
            count -= min(a[i][0],count);
        }
        cout<<ans<<endl;
    }
    return 0;
}