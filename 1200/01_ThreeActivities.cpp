// Q = 1914D
// https://codeforces.com/problemset/problem/1914/D

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
        vector<vector<pair<ll,int>>> a(3,vector<pair<ll,int>>(n));
        for(int i=0;i<n;i++) {cin>>a[0][i].first;a[0][i].second = i;}
        for(int i=0;i<n;i++) {cin>>a[1][i].first;a[1][i].second = i;}
        for(int i=0;i<n;i++) {cin>>a[2][i].first;a[2][i].second = i;}
        for(int i=0;i<3;i++) sort(a[i].rbegin(),a[i].rend());
        ll ans = 0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    int x = a[0][i].second,y = a[1][j].second,z = a[2][k].second;
                    if(x == y || y == z || z == x) continue;
                    ans = max(ans,a[0][i].first+a[1][j].first+a[2][k].first);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}