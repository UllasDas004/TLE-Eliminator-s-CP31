// Q = 1537B
// https://codeforces.com/problemset/problem/1537/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m>>i>>j;
        vector<pair<ll,ll>> corners = {{0,0},{0,m-1},{n-1,0},{n-1,m-1}};
        pair<ll,ll> x,y;
        ll d1 = abs(corners[0].first - i) + abs(corners[0].second - j) + abs(corners[3].first - i) + abs(corners[3].second - j);
        ll d2 = abs(corners[1].first - i) + abs(corners[1].second - j) + abs(corners[2].first - i) + abs(corners[2].second - j);
        x = corners[0];
        y = corners[3];
        if(d2 > d1)
        {
            x = corners[1];
            y = corners[2];
        }
        cout<<x.first+1<<" "<<x.second+1<<" "<<y.first+1<<" "<<y.second+1<<endl;
    }
    return 0;
}