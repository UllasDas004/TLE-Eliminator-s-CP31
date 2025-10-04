// Q = 1869B
// https://codeforces.com/problemset/problem/1869/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        a--;
        b--;
        vector<vector<ll>> p(n,vector<ll>(2));
        for(int i=0;i<n;i++)
        cin>>p[i][0]>>p[i][1];
        ll mna = LLONG_MAX,mnb = LLONG_MAX;
        for(int i=0;i<k;i++)
        {
            if(a < k) mna = 0;
            if(b < k) mnb = 0;
            mna = min(mna,(abs(p[i][0]-p[a][0])+abs(p[i][1]-p[a][1])));
            mnb = min(mnb,(abs(p[i][0]-p[b][0])+abs(p[i][1]-p[b][1])));
        }
        ll dis;
        if(mna == LLONG_MAX || mnb == LLONG_MAX) dis = (abs(p[a][0]-p[b][0])+abs(p[a][1]-p[b][1]));
        else dis = min((mna+mnb),(abs(p[a][0]-p[b][0])+abs(p[a][1]-p[b][1])));
        cout<<dis<<endl;
    }
    return 0;
}